#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if((a.second-a.first)==(b.second-b.first)){
        return a.first<b.first;
    }
    return (a.second-a.first)>(b.second-b.first);
}

void solve(){
    ll n; cin>>n;
    ll arr[n][n];
    vector<pair<ll,ll>> vp;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            arr[i][j] = 0;
            vp.push_back({i+1,j+1});
        }
    }

    sort(all(vp),cmp);
    
    ll cnt = 1;

    for(auto x:vp){
        arr[x.first-1][x.second-1] = cnt++;
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
            if(j+1==n) cout<<endl;
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