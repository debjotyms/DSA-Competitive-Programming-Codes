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
    string s; cin>>s;
    map<int,char> mp;
    for(int i=0;i<n;i++){
        auto it = mp.find(v[i]);
        if(it!=mp.end()){
            if(mp[v[i]]!=s[i]){
                cout<<"NO\n";
                return;
            }
        }else{
            mp[v[i]]=s[i];
        }
    }
    cout<<"YES\n";
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