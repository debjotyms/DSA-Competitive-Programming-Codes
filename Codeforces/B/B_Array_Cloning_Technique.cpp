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
    int n; cin>>n;
    vi v(n); vin;
    map<int,int> mp;
    for(auto x:v){
        mp[x]++;
    }
    int mxFreq = 0;
    for(auto x:mp){
        mxFreq = max(mxFreq,x.second);
    }
    int ans=0;
    while(mxFreq<n){
        int rem = n-mxFreq;
        ans++;
        ans+=min(rem,mxFreq);
        mxFreq+=min(rem,mxFreq);
    }
    cout<<ans<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}