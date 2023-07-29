#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n; cin>>n;
    bool chk = true;
    ll sum = 0;
    for(int i=0;i<n-1;i++){
        ll a; cin>>a;
        if(chk && a==0){
            continue;
        }else{
            chk = false;
        }
        if(a==0) sum++;
        else sum+=a; 
    }
    cout<<sum<<endl;
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