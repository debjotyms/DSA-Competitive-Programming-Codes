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
    vi v(n); vin; sort(all(v));
    vi vv;
    vv.push_back(v[n-1]);
    for(ll i=n-2;i>=0;i--){
        if(v[i]==vv[0]) vv.push_back(v[i]);
        else break;
    }
    if(vv.size()==n){
        cout<<-1<<endl;
        return;
    }
    cout<<n-vv.size()<<" "<<vv.size()<<endl;
    for(ll i=0;i<n-vv.size();i++) cout<<v[i]<<" "; cout<<endl;
    for(auto x:vv) cout<<x<<" ";
    cout<<endl;
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