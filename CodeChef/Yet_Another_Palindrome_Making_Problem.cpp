#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    string v1,v2;
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(i%2) v1.push_back(s[i]);
        else v2.push_back(s[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1==v2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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