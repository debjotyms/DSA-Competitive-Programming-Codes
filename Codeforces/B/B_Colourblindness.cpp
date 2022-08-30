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
    string a,b; cin>>a>>b;
    for(int i=0;i<n;i++){
        if(a[i]=='G') a[i] = 'B';
    }
    for(int i=0;i<n;i++){
        if(b[i]=='G') b[i] = 'B';
    }
    if(a==b) cout<<"YES\n";
    else cout<<"NO\n";
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