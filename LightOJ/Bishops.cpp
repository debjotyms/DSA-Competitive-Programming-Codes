#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    if(((x1+y1)%2)!=((x2+y2)%2)) cout<<"Case "<<cs<<": impossible"<<endl;
    else{
        if((abs(x1-x2)==abs(y1-y2))) cout<<"Case "<<cs<<": 1"<<endl;
        else cout<<"Case "<<cs<<": 2"<<endl;
    }
    cs++;
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