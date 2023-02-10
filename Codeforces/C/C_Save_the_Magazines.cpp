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
    ll n,m,a=0; cin>>n;
    string s; cin>>s;
    vi v(n); vin;
    for(int i=n-1;i>=0;){
        if(s[i]=='1'){
            m=v[i];
            while(i>=0){
                m=min(m, v[i]);
                if(s[i]=='1') a+=v[i--];
                else{
                    a+=v[i--]-m;
                    break;
                }
            }
        }else i--;
    }  
    cout<<a<<endl;
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