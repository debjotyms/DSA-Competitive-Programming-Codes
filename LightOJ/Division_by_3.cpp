#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll a,b; cin>>a>>b;
    if(b%3==0) b=(((b/3)*2));
    else if(b%3==1) b=(((b/3)*2));
    else b=(((b/3)*2)+1);
    if((a-1)%3==0) a=((((a-1)/3)*2));
    else if((a-1)%3==1) a=((((a-1)/3)*2));
    else a=((((a-1)/3)*2)+1);
    cout<<"Case "<<cs<<": "<<b-a<<endl; cs++;
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