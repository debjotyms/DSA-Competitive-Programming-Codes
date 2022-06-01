#include <bits/stdc++.h>
#define LL long long
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
using namespace std;
void solve(){
    int n; cin>>n;
    VI v(n); VIN v;
    int l=1,r=n,diff=abs(v[0]-v[n-1]);
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])<diff){
            diff=abs(v[i]-v[i+1]);
            l=i+1; r=i+2;
        } 
    }
    cout<<l<<" "<<r;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}