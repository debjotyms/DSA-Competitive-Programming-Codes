#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

ll nc2(ll n){
    return (n*(n-1))/2;
}

void solve(){
    ll n; cin>>n;
    vi v(n); vin;
    vi vv;
    for(ll i=0;i<n;i++) vv.push_back(v[i]-i-1);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++) mp[vv[i]]+=1;
    ll res=0;
    for(auto x:mp) if(x.second>1) res+=(nc2(x.second));
    cout<<res<<endl;
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