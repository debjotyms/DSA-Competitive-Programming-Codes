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
        int n,b,r; cin>>n>>r>>b;
        int a = n/(b+1);
        char s[n];
        for(int i=0;i<n;i++){
            s[i]='R';
        }
        for(int i=a;i<n;i = i+a+1){
            if(b==0) break;
            s[i]='B'; b--;
        }
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}