#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int ans = 0;
    long long temp = 0;
    long long a,b,k; cin>>a>>b>>k;
    while(a<=k || b<=k){
        if(a<b){
            a+=b;
        }else{
            b+=a;
        }
        ans++;
    }
    cout<<--ans<<endl;
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