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
    ll n,q; cin>>n>>q;
    ll e = 0;
    ll o = 0;
    ll sum = 0;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        if(a%2==0) e++;
        else o++;
        sum+=a;
    }
    for(int i=0;i<q;i++){
        ll type, val; cin>>type>>val;
        if(type==0){
            sum+=(e*val);
            if(val%2==1){
                o+=e;
                e=0;
            }
        }else{
            sum+=(o*val);
            if(val%2==1){
                e+=o;
                o=0;
            }
        }
        cout<<sum<<endl;
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