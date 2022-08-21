#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll a,b; cin>>a>>b;
    ll m,n;
    if(a==1 && b==1){
        cout<<0<<endl;
        return;
    }
    m = min(a,b);
    n = max(a,b);
    cout<<2*(m-1)+(n-1)+1<<endl;
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