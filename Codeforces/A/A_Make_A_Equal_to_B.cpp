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
    int n; cin>>n;
    vector<ll>a,b;
    for(int i=0;i<n;i++){
        int x; cin>>x; a.push_back(x);
    }
    int diffa=0;
    for(int i=0;i<n;i++){
        int x; cin>>x; b.push_back(x);
        if(a[i]!=x) diffa++;
    }
    sort(all(a)); sort(all(b));
    int diffb=1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) diffb++;
    }
    cout<<min(diffa,diffb)<<endl;
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