#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    int sum=0;
    if(n>=1){
        cout<<(n*(n+1))/2;
    }else{
        for(int i=1;i>=n;i--){
            sum+=i;
        }
        cout<<sum;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}