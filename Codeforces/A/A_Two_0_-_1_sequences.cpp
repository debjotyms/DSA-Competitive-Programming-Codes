#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int n,m; cin>>n>>m;
    string a,b; cin>>a>>b;
    if(a==b) cout<<"YES\n";
    else if(m==1){
        auto it = find(a.begin(),a.end(), b[0]);
        if(it!=a.end()){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        string temp = a.substr(n-m+1,m-1);
        string temp2 = a.substr(0,n-m+1);
        string temp3 = b.substr(1,m-1);
        if(temp!=temp3){
            cout<<"NO\n";
        }else{
            auto it = find(temp2.begin(),temp2.end(),b[0]);
            if(it!=temp2.end()){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
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