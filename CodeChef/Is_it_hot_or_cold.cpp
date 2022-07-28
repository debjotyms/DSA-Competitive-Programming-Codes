#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    if(n>20) cout<<"HOT\n";
    else cout<<"COLD\n";
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