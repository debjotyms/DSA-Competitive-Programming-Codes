#include<bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>()
#define DRI(x) int (x); cin>>x
#define DRII(x,y) int x,y; cin>>x>>y
#define DRIII(x,y,z) int x,y,z; cin>>x>>y>>z
#define ll long long
#define nL endl
#define PI 3.1415926535897932384626433832795
void solve(){
    DRI(n);
    int a[n+1],ans=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    DRI(m);
    for(int i=0;i<m;i++){
        DRII(x,y);
        if(x==1){
            a[x+1]=a[x+1]+(a[x]-y);
            a[x]=0;
        }else if(x==n){
            a[x-1]=a[x-1]+a[x]-(a[x]-y)-1;
            a[x]=0;
        }else{
            a[x+1]=a[x+1]+(a[x]-y);
            a[x-1]=a[x-1]+a[x]-(a[x]-y)-1;
            a[x]=0;
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<nL;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}