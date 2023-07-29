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
    vi vv;
    for(int i=1;i<=n;i++){
        vv.push_back(i);
    }
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    else{
        if(v[0]==vv[0]) swap(vv[0],vv[1]);
        for(int i=1;i<n-1;i++){
            if(v[i]==vv[i]) swap(vv[i],vv[i+1]);
        }
        if(vv[n-1]==v[n-1]) swap(vv[n-1],vv[n-2]);
    }
    for(auto x:vv) cout<<x<<" ";
    cout<<endl;
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