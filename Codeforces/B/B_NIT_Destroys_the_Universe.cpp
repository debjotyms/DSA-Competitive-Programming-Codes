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
    int n; cin>>n;
    vi v(n); vin;
    int l=-1,r;
    for(int i=0;i<n;i++){
        if(v[i]==0) continue;
        if(l==-1) l=i;
        r=i;
    }
    if(l==-1) cout<<0<<endl;
    else{
        for(int i=l;i<=r;i++){
            if(v[i]==0){
                cout<<2<<endl;
                return;
            }
        }
        cout<<1<<endl;
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