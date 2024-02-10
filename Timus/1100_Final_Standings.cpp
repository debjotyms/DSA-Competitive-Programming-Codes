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
    map<ll, vector<ll>> mp;
    ll n; cin>>n;
    
    for(ll i=0;i<n;i++){
        ll a,b; cin>>a>>b;
        mp[b].push_back(a);
    }

    for(auto it = mp.rbegin();it!=mp.rend();it++){
        for(auto y:it->second){
            cout<<y<<" "<<it->first<<endl;
        }
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