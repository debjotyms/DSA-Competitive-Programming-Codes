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
    vi v(n); vin;
    sort(all(v));
    ll maxi = 2*v[0]-1;
    ll min=v[0];
    ll ans=0;
    for(int i=1;i<n;i++){
        if(v[i]>=maxi){
            if(v[i]%maxi==0){
                ans+=(v[i]/maxi)-1;
            }else{
                ans+=(v[i]/maxi);
            }
        }
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