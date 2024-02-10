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
    ll k, n; cin>>k>>n;
    vi v(n); vin;
    ll tot = 0;
    for(ll i=0;i<n-1;i++){
        ll cur = v[i]-k;
        if(cur<0) cur = 0;
        v[i+1]+=cur;
    }

    ll res = v[n-1]-k;
    if(res<0) res=0;
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}