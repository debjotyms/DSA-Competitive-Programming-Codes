#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    ll n,q; cin>>n>>q;
    vi v; v.push_back(0);

    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        v.pb(a);
    }
    
    for(ll i=1;i<n+1;i++) v[i] = v[i-1]+v[i];

    while(q--){
        ll l,r,k; cin>>l>>r>>k;
        ll res = (v[n]-(v[r]+v[l-1]));
        res+=(k*(r-l+1));
        if((res&1)==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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