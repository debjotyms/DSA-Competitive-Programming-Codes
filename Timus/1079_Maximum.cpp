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
    ll dp[100010];
    dp[0]=0;
    dp[1]=1;
    for(ll i=1;i<=100000/2;i++){
        dp[2*i]=dp[i];
        dp[2*i+1]=dp[i]+dp[i+1];
    }
    ll n;
    while(1){
        cin>>n;
        if(n==0) return;
        ll mx=0;
        for(ll i=0;i<=n;i++){
            if(dp[i]>mx) mx=dp[i];
        }
        cout<<mx<<endl;
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