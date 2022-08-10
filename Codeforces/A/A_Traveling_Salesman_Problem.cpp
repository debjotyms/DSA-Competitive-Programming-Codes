#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    vector<pair<int,int>> vp;
    int n; cin>>n;
    int ans = 0;
    int posx=0,posy=0;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    for(auto x:vp){
        int a,b; a = x.first; b = x.second;
        ans+=abs(posx-a);
        ans+=abs(posy-b);
        posx = a; posy = b;
    }
    ans+=(abs(posx-0)+abs(posy-0));
    cout<<ans<<endl;
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