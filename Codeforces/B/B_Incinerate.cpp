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
    ll n,k; cin>>n>>k;
    vector<ll> h,p;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        h.push_back(a);
    }
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        p.push_back(a);
    }
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> mnpq;
    multiset<ll> mst;
    for(ll i=0;i<n;i++){
        mnpq.push({h[i],p[i]});
        mst.insert(p[i]);
    }
    bool ok=false;
    ll totalReduce=0;
    while(k>0){
        totalReduce+=k;
        while(!mnpq.empty()){
            ll currv = mnpq.top().first-totalReduce;
            if(currv<1){
                mst.erase(mst.find(mnpq.top().second));
                mnpq.pop();
            }else{
                break;
            }
        }
        if(mnpq.empty()){
            ok=true;
            break;
        }
        k-=*mst.begin();
    }
    if(ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
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