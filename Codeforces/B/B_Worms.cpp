#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
bool isValid(vi v,ll n,ll k,ll mid){
    return k<=v[mid];
}
vector<ll>vv;
void solve(){
    ll n; cin>>n;
    vi v(n); vin;
    for(int i=0;i<n;i++){
        ll temp=v[i];
        for(int j=0;j<temp;j++){
            vv.push_back(i+1);
        }
    }
    ll a; cin>>a;
    while(a--){
        ll k; cin>>k;
        cout<<vv[k-1]<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}