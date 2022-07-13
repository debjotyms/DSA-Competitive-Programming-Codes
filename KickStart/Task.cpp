#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    ll n; cin>>n;
    for(int i=1;i<=n;i++){
        ll a,b; cin>>a>>b;
        ll temp=0;
        while(a--){
            ll x; cin>>x;
            temp+=x;
        }
        cout<<"Case #"<<i<<": "<<temp%b<<endl;
    }
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