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
    ll w,h; cin>>w>>h;
    ll ans=0;
    for(ll i=0;i<4;i++){
        ll n; cin>>n;
        vector<ll> v;
        for(ll j=0;j<n;j++){
            ll a; cin>>a;
            v.push_back(a);
        }
        if(i<2) ans=max(ans,(v[v.size()-1]-v[0])*h);
        else ans=max(ans,(v[v.size()-1]-v[0])*w);
    }
    cout<<ans<<endl;
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