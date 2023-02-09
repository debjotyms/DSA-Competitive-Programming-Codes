#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
ll fact(ll n){
    if(n==0)
    return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++) res = res * i;
    return res;
}
ll ncr(ll n,ll r){
    return fact(n) / (fact(r) * fact(n - r));
}
void solve(){
    ll n; cin>>n;
    vi v(n); vin;
    cout<<ncr(10-n,2)*6<<endl;
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