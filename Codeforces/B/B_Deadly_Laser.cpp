#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
int dist(int xa,int ya,int xb,int yb){
    return abs(xa-xb)+abs(ya-yb);
}
void solve(){
    int n,m,sx,sy,d; cin>>n>>m>>sy>>sx>>d;
    if((sx-d>1 && sy+d<n) || (sx+d<m && sy-d>1)) cout<<m+n-2<<endl;
    else cout<<-1<<endl;
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