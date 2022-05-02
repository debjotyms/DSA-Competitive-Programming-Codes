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
    VI v(n);
    VIN;
    int mxt = 0;
    for(int i=0;i<n;i++){
        int a=0;
        for(int j=i;j>=0;j--){
            a++;
            if(v[j]<v[j-1]) break;
        }
        for(int j=i;j<n;j++){
            a++;
            if(v[j]<v[j+1]) break;
        }
        a--;
        // cout<<a<<endl;
        mxt = max(mxt,a);
    }
    if(n==1) mxt = 1;
    cout<<mxt;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}