#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    double x,y,d; cin>>x>>y>>d;
    double r = hypot(x,y);
    double theta = atan2(y,x);
    double thetaPrime = (theta)+d*(acos(-1.0)/180.0);
    cout<<setprecision(10)<<r*cos(thetaPrime)<<" "<<r*sin(thetaPrime)<<endl;
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