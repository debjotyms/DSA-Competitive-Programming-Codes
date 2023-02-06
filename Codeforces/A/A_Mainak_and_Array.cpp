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
    int n; cin>>n;
    vi v(n); vin;
    ll mx = INT_MIN;
    for(int i=0;i<n;i++) mx = max(mx,v[i]-v[(i+1)%(n)]);
    for(int i=1;i<n;i++) mx = max(mx,v[i]-v[0]);
    for(int i=0;i<n-1;i++) mx = max(mx,v[n-1]-v[i]);
    cout<<mx<<endl;
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