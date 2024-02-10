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
    ll n; cin>>n;
    vi va;
    vi vb;
    for(ll i=0;i<n;i++){
        ll t; cin>>t;
        va.push_back(t);
    }
    for(ll i=0;i<n;i++){
        ll t; cin>>t;
        vb.push_back(t);
    }

    ll mina = *min_element(all(va));
    ll minb = *min_element(all(vb));

    ll suma = accumulate(all(va),0LL);
    ll sumb = accumulate(all(vb),0LL);  

    ll ans = min(sumb+(mina*n), suma+(minb*n));
    
    cout<<ans<<endl;
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