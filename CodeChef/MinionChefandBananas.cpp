#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
bool isValid(vi v,ll n,ll h,ll mid){
    ll th=0;
    for(auto x:v) th+=ceil(double(x)/mid);
    return th<=h;
}
void solve(){
    ll n,h; cin>>n>>h;
    vi v(n); vin;
    ll lo=0,hi=*max_element(all(v));
    while(hi-lo>1){
        ll mid=(hi+lo)/2;
        if(isValid(v,n,h,mid)) hi=mid;
        else lo=mid;
    }
    if(isValid(v,n,h,lo)) cout<<lo<<endl;
    else cout<<hi<<endl;
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