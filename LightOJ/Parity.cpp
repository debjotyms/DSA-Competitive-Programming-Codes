#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
ll setCount(int n){
    if(n==0) return 0;
    return (n&1)+setCount(n>>1);
}
void solve(){
    int n; cin>>n;
    ll cnt = setCount(n); // __builtin_popcount(n);
    if(cnt%2==0) cout<<"Case "<<cs<<": even"<<endl;
    else cout<<"Case "<<cs<<": odd"<<endl;
    cs++;
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