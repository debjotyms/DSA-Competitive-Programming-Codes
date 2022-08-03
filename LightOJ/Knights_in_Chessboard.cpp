#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
int cs = 1;
void solve(){
    int r,c; cin>>r>>c;
    int ans;
    if(r==1||c==1) ans = max(r,c);
    else if(r==2||c==2){
        ans = ((r*c)/8)*4;
        if((r*c)%8<=4) ans+=(r*c)%8;
        else ans+=4;
    }
    else ans = ceil((r*c)/2.0);
    cout<<"Case "<<cs<<": "<<ans<<endl;
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