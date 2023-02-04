#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
bool isSuffi(vi v,ll w,ll m){
    ll wood=0;
    for(auto x:v) if(x>=w) wood+=(x-w);
    return wood>=m;
}
void solve(){
    ll n,m; cin>>n>>m;
    vi v(n); vin;
    ll lo=1,hi=10e9;
    while(hi-lo>1){
        ll mid=((hi+lo)/2);
        if(isSuffi(v,mid,m)) lo=mid;
        else hi=mid;
    }
    if(isSuffi(v,lo,m)) cout<<lo<<endl;
    else cout<<hi<<endl;
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