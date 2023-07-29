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
    int n,x,y; cin>>n>>x>>y;
    if (min(x,y) == 0 && max(x,y) > 0 && (n-1) % max(x,y) == 0){
        for (int i=2; i<=n; i+=max(x,y)) for(int j = 1; j<=max(x,y);j++) cout<<i<<' ';
        cout<<endl;
    }
    else cout<<-1<<endl;
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