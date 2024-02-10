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

void solve(){
    ll n,x; cin>>n>>x;
    vi v; v.push_back(0);
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        v.push_back(a);
    }
    ll res = 0;
    for(ll i=0;i<n;i++){
        res = max(res,v[i+1]-v[i]);
    }
    res = max(res,2*(x-v[n]));
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