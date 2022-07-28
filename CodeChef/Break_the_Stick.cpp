#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int a,b; cin>>a>>b;
    int n = a-b;

    if(b%2==0){
        if(n%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }else{
        if(b%2==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}