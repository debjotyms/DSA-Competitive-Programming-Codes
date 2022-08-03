#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
ll cs = 1;
void solve(){
    double pi = 2*acos(0.0);
    double r; cin>>r;
    double square = (2*r)*(2*r);
    double circle = pi*r*r;
    cout<<"Case "<<cs<<": "<<fixed<<setprecision(2)<<square-circle<<endl;
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