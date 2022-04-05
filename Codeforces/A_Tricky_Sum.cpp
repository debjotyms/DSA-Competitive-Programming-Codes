#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        LL n; cin>>n;
        LL sum = (n*(n+1))/2;
        LL sum2 = 0;
        for(int i = 0;;i++){
            if(pow(2,i)>n) break;
            sum2 += pow(2,i);
        }
        cout<<sum-(2*sum2)<<"\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}