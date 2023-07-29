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
    ll n; cin>>n;
    vi v(n); vin;
    vector<pair<ll,ll>> vp,vp2; ll lp=1;
    for(auto x:v) vp.push_back({x,lp++});
    sort(all(vp)); reverse(all(vp)); lp=1;
    for(auto x:vp) vp2.push_back({x.second,lp++}); lp=1; ll si = 0;
    for(ll i=0;i<n;i++){
        if(si==0){
            vp2[i].second=lp;
            lp*=-1;
            si++;
        }else{
            vp2[i].second=lp;
            lp*=-1;
            lp++;
            si=0;
        }
    }
    map<ll,ll> mp; ll mini=0;
    vector<ll> vvv;
    for(auto x:vp2) mp[x.first]=x.second;
    for(ll i=1;i<=n;i++) vvv.push_back(mp[i]);
    for(ll i=0;i<n;i++) mini+=(2*v[i]*abs(vvv[i]-0)); cout<<mini<<endl<<0<<" ";
    for(auto x:vvv) cout<<x<<" "; cout<<endl;
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