#include<bits/stdc++.h>
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
long long cs = 1;
typedef long long ll;
using namespace std;
void solve(){
    ll n,m; cin>>n>>m;
    string a,b; cin>>a>>b;
    reverse(all(b));
    a+=b;
    ll ans = 0;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]) ans++;
    }
    if(ans>1) cout<<"NO\n";
    else cout<<"YES\n";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}