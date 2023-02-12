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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector <int>v; v.push_back(0);
    for(auto x:s){
        if(x=='B') v.push_back(1);
        else v.push_back(0);
    }
    for(int i=1;i<=n;i++){
        v[i]=v[i]+v[i-1];
    }
    int mini=k;
    for(int i=k;i<=n;i++){
        int rem=k-(v[i]-v[i-k]);
        if(rem<mini) mini=rem;
    }
    cout<<mini<<endl;
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