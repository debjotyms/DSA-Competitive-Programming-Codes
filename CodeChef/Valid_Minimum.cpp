#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    vector <int> v(3); vin v;
    if(v[0]!=v[1] && v[1]!=v[2] && v[2]!=v[0]) cout<<"NO\n";
    else{
        sort(v.begin(),v.end());
        if(v[0]==v[1] && v[1]==v[2] && v[2]==v[0]) cout<<"YES\n";
        else if(v[1]==v[2]) cout<<"NO\n";
        else cout<<"YES\n";
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