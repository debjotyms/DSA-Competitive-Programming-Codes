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
    ll n, k; cin>>n>>k;
    vi v(n); vin;
    vi vv;
    for(ll i=0;i<n;i++) if(abs(v[i]-(i+1))%k!=0) vv.push_back(i);
    if(vv.size()==0) cout<<0<<endl;
    else if(vv.size()==2){
        swap(v[vv[0]], v[vv[1]]);
        for(ll i=0;i<n;i++) if(abs(v[i]-(i+1))%k!=0) vv.push_back(i);
        if(vv.size()==2) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    else cout<<-1<<endl;
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