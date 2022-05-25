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
    while (t--){
        int n; cin>>n;
        string s; cin>>s;
        int m = ceil(n/2.0);
        char ch = s[m-1];
        int ans  = 0;
        if(n%2==1){
            ans++; m--;
        }
        for(int i=m;i>0;i--){
            if(s[i-1]!=ch){
                break;
            }
            ans+=2;
        }
        cout<<ans<<endl;
    }
    
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}