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
    if(n==1) cout<<"1";
    else if(n<=3) cout<<"NO SOLUTION";
    else{
        for(int i=n;i>0;i--){
            if(i%2==1) cout<<i<<" ";
        }
        for(int i=n;i>0;i--){
            if(i%2==0) cout<<i<<" ";
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