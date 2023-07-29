#include <bits/stdc++.h>
using namespace std;
#define vi vector <double>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    double n,l; cin>>n>>l;
    vi v(n); vin;
    sort(all(v));
    double maxi=(v[0]-0);
    for(int i=0;i<n-1;i++) if(maxi<(v[i+1]-v[i])/2) maxi=(v[i+1]-v[i])/2;
    if (maxi<(l-v[n-1])) maxi=(l-v[n-1]);
    cout<<fixed<<setprecision(10)<<maxi<<endl;
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