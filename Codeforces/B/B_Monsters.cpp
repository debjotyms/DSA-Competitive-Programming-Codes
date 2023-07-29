#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first == b.first) return a.second<b.second;
    return a.first>b.first;
}

void solve(){
    ll n,k; cin>>n>>k;
    vi v(n); vin;

    ll arr[n];
    for(int i=0;i<n;i++){
        arr[i] = v[i]%k;
        if(v[i]%k==0) arr[i] = k;
    }

    vector<pair<ll, ll>> vp;

    for(ll i=0;i<n;i++){
        vp.push_back({arr[i],i});
    }

    sort(all(vp), cmp);

    for(auto x:vp){
        cout<<x.second+1<<" ";
    }
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