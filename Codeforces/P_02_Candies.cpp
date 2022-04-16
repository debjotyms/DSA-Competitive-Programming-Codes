#include<bits/stdc++.h>
using namespace std;
#define nL endl
#define ll long long
#define PB push_back
#define VI vector <int>
#define SQR(x) ((x)*(x))
#define DRI(x) int (x); cin>>x
#define read(type) readInt<type>()
#define DRII(x,y) int x,y; cin>>x>>y
#define FB(x,y,z) for(int x=y;x<z;x++)
#define DRIII(x,y,z) int x,y,z; cin>>x>>y>>z
void solve(){
    VI V;
    DRI(N);
    int ans=0;
    FB(i,0,N){
        DRI(R);
        V.PB(R);
    }
    DRII(A,B);
    FB(i,A,B+1){
        ans=ans+V[i];
    }
    cout<<ans;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}