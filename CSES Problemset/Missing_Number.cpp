#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    LL t; cin>>t;
    LL n = t;
    LL total=0,a;
    while(t>1){
        cin>>a;
        total+=a;
        t--;
    }
    cout<<((n*(n+1))/2)-total;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}