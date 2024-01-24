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
    double n,m; cin>>n>>m;
    ll t = m;
    map<ll,ll> mp;
    for(ll i=1;i<=n;i++){
        mp[i] = 0;
    }
    while(t--){
        ll a; cin>>a;
        mp[a]++;
    }

    for(auto x:mp){
        cout<<fixed<<setprecision(2)<<(mp[x.first]/m)*100<<"%"<<endl;
    }
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