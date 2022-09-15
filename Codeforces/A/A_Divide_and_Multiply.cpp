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
    ll n; cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        v.push_back(x);
    }
    int k=0;
    for(int i=0;i<n;i++){
        while(v[i]%2==0 && v[i]>1){
            v[i]/=2;
            k++;
        }
    }
    sort(all(v));
    for(int i=0;i<k;i++){
        v[n-1]*=2;
    }
    ll ans=0;
    for(auto x:v) ans+=x;
    cout<<ans<<endl;
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