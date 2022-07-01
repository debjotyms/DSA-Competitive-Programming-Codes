#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    LL l,r; cin>>l>>r;
    for(LL a=l;a<r-1;a++){
        for(LL b=l+1;b<r;b++){
            for(LL c=l+2;c<=r;c++){
                if(__gcd(a,b)==1){
                    if(__gcd(b,c)==1){
                        if(__gcd(a,c)!=1){
                            cout<<a<<" "<<b<<" "<<c; return;
                        }
                    }
                }
            }
        }
    }
    cout<<-1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}