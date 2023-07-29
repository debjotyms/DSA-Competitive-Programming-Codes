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
    map<int,int> mp;
    for(auto x:v){
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second==1){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<n;){
        int lst=i+mp[v[i]]-1;
        int frst=i;
        cout<<lst+1<<" ";
        for(int j=frst;j<lst;j++) cout<<j+1<<" ";
        i+=mp[v[i]];
        if(lst==n-1){
            cout<<endl;
            return;
        }
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