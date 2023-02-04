#include <bits/stdc++.h>
using namespace std;
#define vi vector <double>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
const double eps=10e-5;
bool isValid(vi v,ll n,ll f,double mid){
    ll cnt=0;
    for(int i=0;i<n;i++){
        cnt+=(int)(v[i]/mid);
    }
    if(cnt>=f) return true;
    else return false;
}
void solve(){
    ll n,f; cin>>n>>f;
    f++;
    vi v(n); vin; sort(all(v));
    for(int i=0;i<n;i++){
        v[i]=M_PI*v[i]*v[i];
    }
    double sum=*max_element(all(v));
    double lo=0,hi=sum;
    while(hi-lo>eps){
        double mid=(hi+lo)/2;
        if(isValid(v,n,f,mid)){
            lo=mid;
        }else{
            hi=mid;
        }
    }
    cout<<fixed<<setprecision(4)<<lo<<endl;
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