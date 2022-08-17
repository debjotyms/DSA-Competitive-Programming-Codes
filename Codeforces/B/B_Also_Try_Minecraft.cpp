#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
const int N = 1000000;
ll arr[N];
ll arr2[N];
void solve(){
    ll n,m; cin>>n>>m;
    vi v(n); vin;
    for(int i=1;i<n;i++){
        ll dif = v[i-1] - v[i];
        if(dif<=0) arr[i] = 0;
        else arr[i] = dif;
    }
    reverse(v.begin(),v.end());
    for(int i=1;i<n;i++){
        ll dif = v[i-1] - v[i];
        if(dif<=0) arr2[i] = 0;
        else arr2[i] = dif;
    }
    for(int i=1;i<n;i++){
        arr[i] = arr[i] + arr[i-1];
        arr2[i] = arr2[i] + arr2[i-1];
    }
    reverse(arr2,arr2+n);
    while(m--){
        ll a,b; cin>>a>>b;
        if(a<b) cout<<arr[b-1]-arr[a-1]<<endl;
        else cout<<arr2[b-1]-arr2[a-1]<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}