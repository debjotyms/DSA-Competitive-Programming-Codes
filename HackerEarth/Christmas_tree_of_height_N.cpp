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
    while(t--){
        LL n; cin>>n;
        LL a[n][n];
        a[0][0]=1;
        for(LL i=1;i<n;i++){
            a[i][0]=1;
            a[i][i]=1;
            for(LL j=1;j<i;j++){
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
        for(LL i=0;i<n;i++){
            LL j;
            for(j=0;j<=i;j++){
                cout<<a[i][j]<<" ";
            }
            if(i!=n) cout<<endl;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}