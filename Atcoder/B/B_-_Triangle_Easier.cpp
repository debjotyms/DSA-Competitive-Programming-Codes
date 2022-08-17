#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n,m; cin>>n>>m;
    vector <vector<bool>> vv(n+1,vector<bool>(n+1,false));
    for(int i=1;i<=m;i++){
        int a,b; cin>>a>>b;
        vv[a][b]= vv[b][a] = true;
    }
    int ans = 0;
    for(int i=1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<=n;k++){
                if(vv[i][j] && vv[j][k] && vv[k][i]){
                    ans++;
                }
            }
        }
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