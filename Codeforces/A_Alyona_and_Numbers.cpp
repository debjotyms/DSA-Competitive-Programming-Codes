#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
LL arn[6],arm[6];
void solve(){
    LL n,m,total=0; cin>>n>>m;
    for(LL i=1;i<=n;i++) arn[i%5]++;
    for(LL i=1;i<=m;i++) arm[i%5]++;
    total+=arn[0]*arm[0];
    total+=arn[1]*arm[4];
    total+=arn[2]*arm[3];
    total+=arn[3]*arm[2];
    total+=arn[4]*arm[1];
    cout<<total;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}