#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    VI v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    // for(int i:v){
    //     cout<<i<<" ";
    // }

    int diff=1000;
    for(int i=0;i<=m-n;i++){
        diff = min(diff,v[i+n-1]-v[i]);
        // cout<<diff<<endl;
    }
    cout<<diff;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}