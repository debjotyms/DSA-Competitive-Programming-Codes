#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n; cin>>n;
    vi v(4);
    for(int i=1;i<=3;i++){
        int a; cin>>a;
        v[i] = a;
    }
    if(v[n]==0) cout<<"NO\n";
    else if(v[v[n]]==0) cout<<"NO\n";
    else cout<<"YES\n";
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