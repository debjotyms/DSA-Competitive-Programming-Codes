#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        LL y,x; cin>>y>>x;
        LL b,a;
        if(y>x){
            if(y%2==0){
                b = y;
                a = 1;
            }else{
                b = 1;
                a = y;
            }
        }else{
            if(x%2==0){
                b = x;
                a = 1;
            }else{
                b = 1;
                a = x;
            }
        }
        cout<<((max(a,b))*(max(a,b)))-(abs(y-b)+abs(x-a))<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}