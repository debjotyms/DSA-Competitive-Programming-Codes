#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll x,y; cin>>x>>y;
    ll k = x*10000000000;
    ll ans=0;
    ll tracker=0;
    while(k>=x){
        ll temp = (y/k);
        ans+=temp;
        y=(y%k);
        k/=10;
    }
    cout<<ans+y<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}