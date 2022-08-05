#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int ax,ay,bx,by,cx,cy,dx,dy,a; cin>>ax>>ay>>bx>>by>>cx>>cy;
    dx = ax + cx - bx;
    dy = ay + cy - by;
    a = 0.5*(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
    if (a < 0)
        a *= -1;
    printf("Case %lld: %d %d %d\n", cs, dx, dy, a); cs++;
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