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
    string s; cin>>s;
    ll n; cin>>n;
    map<char,int> mp;
    ll x = 1;
    for(char i = 'a';i<='z';i++){
        mp[i] = x; x++;
    }
    
    vector<pair<char,int>> vp;
    int sum = 0;
    for(int i=0;i<s.size();i++){
        vp.push_back({s[i],i});
        sum+=mp[s[i]];
    }
    sort(all(vp));
    for(int i=vp.size()-1;i>=0;i--){
        if(sum<=n) break;
        sum-=mp[vp[i].first];
        s[vp[i].second]='0';
    }
    for(auto xx:s){
        if(xx!='0') cout<<xx;
    }
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