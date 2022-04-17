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
    char eng[n][n];
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>eng[i][j];
            if(eng[i][j]==eng[0][1]) cnt2++;
        }
    }
    for(int i=0;i<n;i++){
        if(eng[i][i]==eng[0][0]) cnt1++;
        if(eng[i][n-i-1]==eng[0][0]) cnt1++;
    }
    cnt1--;
    if(2*n-1==cnt1 && ((n*n)-(2*n-1))==cnt2) cout<<"YES";
    else cout<<"NO";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}