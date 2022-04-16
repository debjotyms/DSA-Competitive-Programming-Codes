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
        long long ans = 1;
        long long n; cin>>n;
        while(n--){
            long long a; cin>>a;
            ans*=a;
        }
        if(ans%10==2 || ans%10==3 || ans%10==5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}