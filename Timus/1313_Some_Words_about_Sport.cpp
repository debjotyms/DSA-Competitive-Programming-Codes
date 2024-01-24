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
    ll dp[n+1][n+1];
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>dp[i][j];
        }
    }
    for(ll i=1;i<=n;i++){
        ll t=i;
        for(ll j=1;j<=i;j++){
            cout<<dp[t][j]<<" ";
            t--;
        }
    }
    for(ll i=2;i<=n;i++){
        ll t=n;
        for(ll j=i;j<=n;j++){
            cout<<dp[t][j]<<" ";
            t--;
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



// #include <bits/stdc++.h>
// using namespace std;
// #define pb push_back
// #define vi vector <long long>
// #define rev(x) reverse(all(x))
// #define all(x) x.begin(),x.end()
// #define vin for(auto &x:v) cin>>x;
// #define vout(v) for(auto x:v) cout<<x<<" ";
// #define endl '\n'
// typedef long long ll;
// long long cs = 1;

// bool comp(pair<ll,ll> a, pair<ll,ll> b){
//     if(a.first+a.second == b.first+b.second) return a.first>b.first;
//     return a.first+a.second < b.first+b.second;
// }

// void solve(){
//     ll n; cin>>n;
//     ll arr[n][n];
//     for(ll i=0;i<n;i++){
//         for(ll j=0;j<n;j++){
//             ll a; cin>>a;
//             arr[i][j]=a;
//         }
//     }
//     vector<pair<ll,ll>> vp;
//     for(ll i=1;i<=n;i++){
//         for(ll j=1;j<=n;j++){
//             vp.push_back({i,j});
//         }
//     }
//     sort(all(vp),comp);
//     for(auto x:vp){
//         cout<<arr[x.first-1][x.second-1]<<" ";
//     }
//     cout<<endl;
    
// }

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t=1;
//     //cin>>t;
//     while(t--) solve();
//     return 0;
// }