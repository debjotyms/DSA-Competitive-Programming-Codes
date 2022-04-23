#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int a,b,c;
    a = 12;
    b = 42;
    c = 54;
    int i = min(a,min(b,c));
    for(;i>0;i--){
        if(a%i==0 && b%i==0 && c%i==0){
            cout<<(a*b*c)/i;
            break;
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