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
    ll n,m;
    cin>>n;
    vi b;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        b.push_back(a);
    }
    cin>>m;
    vi g;
    for(int i=0;i<m;i++){
        int a; cin>>a;
        g.push_back(a);
    }
    int ans=0;
    sort(all(b));
    sort(all(g));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(b[i]-g[j])<=1){
                g[j]=1000;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
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