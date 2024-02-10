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
    vi v(n); vin;
    ll mxs = 0;
    ll mxi = 0;
    for(ll i=0;i<n-2;i++){
        ll tsum = v[i]+v[i+1]+v[i+2];
        if(tsum>mxs){
            mxs = tsum;
            mxi = i;
        }
    }
    cout<<mxs<<" "<<mxi+2<<endl;
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