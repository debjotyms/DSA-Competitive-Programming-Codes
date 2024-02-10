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
    ll n,f,a,b; cin>>n>>f>>a>>b;
    vector<ll> v;
    v.push_back(0);
    for(ll i=0;i<n;i++){
        ll num; cin>>num;
        v.push_back(num);
    }
    ll tot=0;
    for(ll i=0;i<n;i++){
        tot+=min((v[i+1]-v[i])*a,b);
    }
    if(tot<f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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