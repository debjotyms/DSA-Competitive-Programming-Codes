#include <bits/stdc++.h>
#define LL long long
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        VI v(n); VIN v;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                ans++;
                i+=1;
            }
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