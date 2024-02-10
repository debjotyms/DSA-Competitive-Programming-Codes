#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

ll times(vector<ll> v){
    ll res = 0;
    for(ll i=1;i<v.size();i++) if(v[i]>v[i-1]) res+=(v[i]-v[i-1]);
    return res+=v[0];
}

void solve(){
    ll n; cin>>n;
    vi v(n); vin;
    vi va = v;
    if(n<3){
        cout<<"YES"<<endl;
        return;
    }
    sort(all(va));
    ll fmin = va[0];
    ll smin = va[1];
    ll least = smin+va[va.size()-1]-smin;
    if(least<times(v)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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