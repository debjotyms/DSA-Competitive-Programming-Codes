#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
int cs = 1;
void solve(){
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    int n; cin>>n;
    cout<<"Case "<<cs<<":\n";
    while(n--){
        int x,y; cin>>x>>y;
        if(x>x1 && y>y1 && x<x2 && y<y2){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    cs+=1;
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