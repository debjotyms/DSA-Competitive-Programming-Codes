#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    LL n,s;
    while(t--){
        cin>>n>>s;
        cout<<(s/(n*n))<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}