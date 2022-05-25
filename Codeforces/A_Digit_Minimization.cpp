#include <bits/stdc++.h>
#define LL long long
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(s.size()==2){
            cout<<s[1]<<endl;
        }else{
            sort(s.begin(),s.end());
            cout<<s[0]<<endl;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}