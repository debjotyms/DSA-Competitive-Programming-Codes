#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int a,b,c; cin>>a>>b>>c;
    int ma = b-(c-b);
    if(ma%a==0 && ma>=a && ma!=0){
        cout<<"YES\n";
        return;
    }
    int mb = c-(c-a)/2;
    if(mb%b==0 && mb>=b && mb!=0 && (c-a)%2==0){
        cout<<"YES\n";
        return;
    }
    int mc = b+(b-a);
    if(mc%c==0 && mc>=c && mc!=0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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