#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}

void solve(){
    ll n,m,h; cin>>n>>m>>h;
    vector<pair<ll,ll>> vp;

    for(ll i=0;i<n;i++){
        vi v(m); vin;
        sort(all(v));
        ll panalty = 0;
        ll cnt = 0;
        ll probSum = 0;
        for(ll j=0;j<m;j++){
            probSum = probSum + v[j];
            if(probSum>h) break;
            panalty = probSum+panalty;
            cnt++;
        }
        vp.push_back({cnt, panalty});
    }
    ll rPo = vp[0].first, rPa = vp[0].second;

    sort(all(vp),cmp);

    ll res = 1;

    for(auto x:vp){
        if(x.first == rPo and x.second == rPa){
            cout<<res<<endl;
            break;
        }
        res++;
    }
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