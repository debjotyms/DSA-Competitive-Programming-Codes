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
    ll a,b; cin>>a>>b;
    vector<ll> v,vv;
    for(int i=0;i<a;i++){
        ll a; cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<b;i++){
        ll a; cin>>a;
        vv.push_back(a);
    }
    sort(all(v));
    reverse(all(v));
    sort(all(vv));
    reverse(all(vv));
    ll ans=0;
    if(a<b){
        for(auto x:vv){
            v.push_back(x);
        }
        sort(all(v));
        reverse(all(v));
        for(int i=0;i<a;i++){
            ans+=v[i];
        }
    }else{
        for(int i=0;i<b;i++){
            ans+=vv[i];
        }
        for(int i=0;i<a-b;i++){
            ans+=v[i];
        }
    }
    cout<<ans<<endl;
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