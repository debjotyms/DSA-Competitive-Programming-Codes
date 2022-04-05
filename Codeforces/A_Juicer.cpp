#include<bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>()
#define DRI(x) int (x); cin>>x
#define DRII(x,y) int x,y; cin>>x>>y
#define DRIII(x,y,z) int x,y,z; cin>>x>>y>>z
#define ll long long
#define SQR(x) ((x)*(x))
#define nL endl
#define PI 3.1415926535897932384626433832795
void solve(){
    DRIII(n,b,d);
    int now=0,ans=0;
    for(int i=0;i<n;i++){
        DRI(x);
        if(x>b) continue;
        now+=x;
        if(now>d){
            ans++;
            now=0;
        }
    }
    cout<<ans;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}