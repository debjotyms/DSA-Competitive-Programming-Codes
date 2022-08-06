#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    double u1,u2,u3,a1,a2; cin>>u1>>u2>>u3>>a1>>a2;
    double t1 = u1/a1;
    double t2 = u2/a2;
    double t = t1>t2?t1:t2;
    double birdTravel = t*u3;
    double s1 = (u1*t1)-(.5*a1*t1*t1);
    double s2 = (u2*t2)-(.5*a2*t2*t2);
    cout<<fixed<<setprecision(10)<<"Case "<<cs<<": "<<s1+s2<<" "<<birdTravel<<endl; cs++;
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