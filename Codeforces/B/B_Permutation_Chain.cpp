#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" "; cout<<endl;
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n; cin>>n;
    vi v;
    for(int i=1;i<=n;i++) v.push_back(i);
    cout<<n<<endl;
    vout    
    for(int i=n-1;i>0;i--){
        swap(v[i],v[i-1]);
        vout
    }
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