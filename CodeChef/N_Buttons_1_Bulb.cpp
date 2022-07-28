#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    string a,b; cin>>a>>b;
    int cng=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) cng++;
    }
    if((cng&1)==1) cout<<0<<endl;
    else cout<<1<<endl;
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