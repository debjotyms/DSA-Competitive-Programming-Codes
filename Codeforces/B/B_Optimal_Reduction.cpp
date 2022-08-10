#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
ll minOpp(vector<int>&target) {
    ll ans=target[0];
    for(int i=1;i<target.size();i++){
        if(target[i]>target[i-1]) ans+=(target[i]-target[i-1]);
    }
    return ans;
}
void solve(){
    vector <int> v,v2;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    if(minOpp(v)<=v2[n-1]) cout<<"YES\n";
    else cout<<"NO\n";
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
