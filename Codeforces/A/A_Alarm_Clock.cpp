#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll a,b,c,d; cin>>a>>b>>c>>d;
    if(b>=a) cout<<b<<endl;
    else if(c<=d) cout<<-1<<endl;
    else{
        ll temp = 0;
        if((a-b)%(c-d)!=0) temp=1;
        cout<<b+((((a-b)/(c-d))+temp)*c)<<endl;
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