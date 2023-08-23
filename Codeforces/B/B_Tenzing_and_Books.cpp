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
    ll n,x; cin>>n>>x;
    vi v(n);
    ll s = 0;
    for(ll i=0;i<3;i++){
        for(ll j=0;j<n;j++) cin>>v[j];
        for(ll j=0;j<n;j++){
            if((x|v[j])!=x) break;
            s = (s|v[j]);
        }
    }
    if(s==x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;  
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