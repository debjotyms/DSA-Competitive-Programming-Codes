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
    ll n; cin>>n;
    ll dp[n+1][n+1];
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>dp[i][j];
        }
    }
    for(ll i=1;i<=n;i++){
        ll t=i;
        for(ll j=1;j<=i;j++){
            cout<<dp[t][j]<<" ";
            t--;
        }
    }
    for(ll i=2;i<=n;i++){
        ll t=n;
        for(ll j=i;j<=n;j++){
            cout<<dp[t][j]<<" ";
            t--;
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