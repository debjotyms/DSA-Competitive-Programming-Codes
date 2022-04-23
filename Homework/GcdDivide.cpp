#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
long long gcd(long long a,long long b){
    while(1){
        if(b%a==0){
            return a;
        }
        a = b%a;
    }
}
void solve(){
    int a,b; cin>>a>>b;
    if(a>b) swap(a,b);
    cout<<gcd(a,b);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}