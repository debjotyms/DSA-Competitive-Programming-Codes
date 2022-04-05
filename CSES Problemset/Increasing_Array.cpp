#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    LL a; cin>>a;
    LL mx=0, ans=0;
    for(int i=0;i<a;i++){
        LL b; cin>>b;
        mx=max(b,mx);
        ans+=mx-b;
    }
    cout<<ans;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}