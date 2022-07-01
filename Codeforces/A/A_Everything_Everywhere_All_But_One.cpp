#include <bits/stdc++.h>
#define LL long long
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int flag=0; 
        VI v(n); VIN v;
        for(int i=0;i<n;i++){
            double avg=0;
            for(int j=0;j<n;j++){
                if(j==i) continue;
                avg+=v[j];
            }
            double m = avg/(n-1);
            if(m==v[i]){
                cout<<"YES\n";
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"NO\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}