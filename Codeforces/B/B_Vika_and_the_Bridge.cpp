#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

ll maxDiff(vector<ll> v){
    ll mx = 0;
    ll mxIdx = 0;
    vector<ll> tv;
    for(ll i=1;i<v.size();i++){
        tv.push_back(v[i]-v[i-1]);
        if(mx<v[i]-v[i-1]){
            mx = v[i]-v[i-1];
            mxIdx = i-1;
        }
    }
    tv[mxIdx] = (ll)ceil(float(mx)/2);
    return *max_element(all(tv));
}

void solve(){
    ll n,k; cin>>n>>k;
    vi v(n); vin;
    map<ll,vector<ll>> mv;

    if(n==1){
        cout<<0<<endl;
        return;
    }

    for(ll i=0;i<n;i++){
        if(mv[v[i]].size()==0) mv[v[i]].push_back(0);
        mv[v[i]].push_back(i+1);
    }

    for(ll i=1;i<=k;i++){
        if(!mv[i].empty()) mv[i].push_back(n+1);
    }

    vector<ll> res;

    for(ll i=1;i<=k;i++){
        if(!mv[i].empty()) res.push_back(maxDiff(mv[i]));
    }
    
    cout<<*min_element(all(res))-1<<endl;
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