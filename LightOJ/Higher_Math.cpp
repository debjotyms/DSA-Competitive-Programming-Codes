#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
ll cs = 1;
void solve(){
    ll a,b,c; cin>>a>>b>>c;
    vi v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    if(v[0]*v[0]+v[1]*v[1]==v[2]*v[2]) cout<<"Case "<<cs<<": "<<"yes"<<endl;
    else cout<<"Case "<<cs<<": "<<"no"<<endl;
    cs++;
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