#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if(n<=2 && s[0]==s[1]){
       cout<<"Yes\n";
       return;
    }
    else if(n<=2){
       cout<<"No\n";
       return;
    }

    if(s[0]=='A' && s[n-1]=='B'){
        cout<<"No\n";
        return;
    }else{
        cout<<"Yes\n";
        return;
    }

}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}