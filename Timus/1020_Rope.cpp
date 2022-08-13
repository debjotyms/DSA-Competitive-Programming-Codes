#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
double dist(pair<double,double>a,pair<double,double>b){
    return sqrt(pow((a.first-b.first),2)+(pow((a.second-b.second),2)));
}
void solve(){
    int n; cin>>n;
    double r; cin>>r;
    vector <pair<double,double>> vp;
    for(int i=0;i<n;i++){
        double a,b; cin>>a>>b;
        vp.push_back({a,b});
    }
    double totalDist = 0;
    for(int i=0;i<n-1;++i){
        totalDist+=dist(vp[i],vp[i+1]);
    }
    totalDist+=dist(vp[0],vp[n-1]);
    cout<<fixed<<setprecision(2)<<totalDist+(2*3.1416*r);
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