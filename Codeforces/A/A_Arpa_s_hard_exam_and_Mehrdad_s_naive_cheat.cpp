#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    int md=n%4;
    if(n==0) cout<<1;
    else if(md==1) cout<<8;
    else if(md==2) cout<<4;
    else if(md==3) cout<<2;
    else cout<<6;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}