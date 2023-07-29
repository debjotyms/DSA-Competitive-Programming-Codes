#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
bool flag = false;
ll t;
vector<int> g[100000];
void dfs(int v){
    for(auto x:g[v]){
        if(x==t){
            cout<<"YES\n";
            flag=true;
            return;
        }
        dfs(x);
    }
}
void solve(){
    ll n; cin>>n>>t;
    vi v(n-1); vin;
    for(int i=1;i<n;i++){
        g[i].push_back(i+v[i-1]);
    }
    dfs(1);
    if(!flag) cout<<"NO\n";
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