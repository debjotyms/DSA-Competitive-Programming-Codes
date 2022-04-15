#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define VOUT for(int i:v) cout<<i<<" ";
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    VI v{12,9,3,4,5,34,7,48,29,10,511,2,13,141,15,146,17,18,19,202};
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(v[j]>v[j+1])
            swap(v[j],v[j+1]);
        }
    }
    VOUT
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}