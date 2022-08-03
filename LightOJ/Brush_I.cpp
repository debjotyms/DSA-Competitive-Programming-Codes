#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
ll cs = 1;
void solve(){
    ll n; cin>>n;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        if(a<=0) continue;
        ans+=a;
    }
    cout<<"Case "<<cs<<": "<<ans<<endl;
    cs++;
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