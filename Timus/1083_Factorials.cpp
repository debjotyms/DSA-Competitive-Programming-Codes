#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
void solve(){
    long long n; cin>>n;
    string s; cin>>s;
    long long k = s.size();
    long long ans = 1;
    int i=0;
    if(n%k==0){
        while((n-(i*k))>=k){
            ans = ans*(n-(i*k));
            i++;
        }
        cout<<ans;
    }else{
        while((n-(i*k))>=(n%k)){
            ans = ans*(n-(i*k));
            i++;
        }
        cout<<ans;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}