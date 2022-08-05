#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll w; cin>>w;
    if(w%2==1){
        cout<<"Case "<<cs<<": Impossible\n"; cs++;
    }else{
        ll n = w/2;
        ll m = 2;
        while(n%2==0){
            n/=2;
            m*=2;
        }
        cout<<"Case "<<cs<<": "<<n<<" "<<m<<endl; cs++;
    }
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