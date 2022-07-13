#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    ll n,m,a,b; cin>>n>>m>>a>>b;
    ll ans = 0;
    for(int i=n;i<=m;i++){
        if(i%(a)!=0 || i%(a+b)!=0 || i%(a+2*b)!=0 || i%(a+3*b)!=0 || i%(a+4*b)!=0){
            ans++;
        }
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