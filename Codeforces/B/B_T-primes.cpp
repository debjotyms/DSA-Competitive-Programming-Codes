#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll t; cin>>t;
    vi v(1000001,0);
    for(ll i=2;i<=1000000;i++){
        if(v[i]==0){
            for(ll j=2;i*j<=1000000;j++){
                v[i*j]=1;
            }
        }
    }
    while(t--){
        ll n; cin>>n;
        ll a=sqrt(n);
        if(n==1) cout<<"NO\n";
        else if(a*a==n&&v[a]==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}