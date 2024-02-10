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
    ll result = 0;
    ll n,k,q; cin>>n>>k>>q;
    vi v; v.push_back(-1);
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        if(a>q) v.push_back(i);
    }
    v.push_back(n);

    for(ll i=1;i<v.size();i++){
        ll dif = v[i]-v[i-1]-1;
        if(dif>=k){
            ll s = dif-k+1;
            result += ((s*(s+1))/2);
        }
    }

    // vout(v); cout<<endl;
    cout<<result<<endl;
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