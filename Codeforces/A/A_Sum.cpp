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
    vi v(3); vin;
    sort(all(v));
    if(v[0]+v[1]==v[2]) cout<<"YES\n";
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