#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    vi v(5); vin;
    sort(v.begin(),v.end());
    if(v[0]==v[2] && v[3]==v[4]) cout<<"Yes\n";
    else if(v[0]==v[1] && v[2]==v[4]) cout<<"Yes\n";
    else cout<<"No\n";
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