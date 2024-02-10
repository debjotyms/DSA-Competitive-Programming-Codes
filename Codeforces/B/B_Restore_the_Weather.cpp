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
    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>> vp;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        vp.push_back({a,i});
    }
    vi v;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        v.push_back(a);
    }

    sort(all(vp));
    sort(all(v));

    vi vv(n);
    for(ll i=0;i<n;i++){
        vv[vp[i].second] = v[i];
    }

    for(auto x:vv) cout<<x<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}