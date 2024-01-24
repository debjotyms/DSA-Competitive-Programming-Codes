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
    ll na,nb,nc;
    set<ll> a,b,c;
    ll res = 0;

    cin>>na;
    for(ll i=0;i<na;i++){
        ll x; cin>>x;
        a.insert(x);
    }

    cin>>nb;
    for(ll i=0;i<nb;i++){
        ll x; cin>>x;
        b.insert(x);
    }

    cin>>nc;
    for(ll i=0;i<nc;i++){
        ll x; cin>>x;
        c.insert(x);
    }
    for(auto x:c){
        if(a.find(x)!=a.end() && b.find(x)!=b.end()) res++;
    }
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