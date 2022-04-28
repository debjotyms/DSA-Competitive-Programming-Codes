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
    int u; cin>>u;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        if(a==u||b==u||7-a==u||7-b==u){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}