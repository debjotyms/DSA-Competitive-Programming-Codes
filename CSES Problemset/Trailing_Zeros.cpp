#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
ll fact(ll n){
    ll f=1;
    for(ll i=1;i<=n;i++) f*=i;
    return f;
}
void solve(){
    ll n; cin>>n;
    ll ans=0,div=5;
    for(ll i=1;div<=1000000000;i++){
        ans+=(n/div);
        div*=5;
    }
    cout<<ans<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}