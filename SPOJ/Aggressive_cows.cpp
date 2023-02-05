#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
bool isValid(vi v,ll n,ll m,ll mid){
    ll cnt=m;
    ll pos=-1;
    for(int i=0;i<n;i++){
        if(pos==-1||v[i]-pos>=mid){
            pos=v[i];
            cnt--;
        }
        if(cnt==0) break;
    }
    return cnt==0;
}
void solve(){
    ll n,m; cin>>n>>m;
    vi v(n); vin; sort(all(v));
    ll sum=0;
    ll lo=0,hi=10e9;
    while((hi-lo)>1){
        ll mid=(hi+lo)/2;
        if(isValid(v,n,m,mid)){
            lo=mid;
        }else{
            hi=mid-1;
        }
    }
    if(isValid(v,n,m,hi)) cout<<hi<<endl;
    else cout<<lo<<endl;
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