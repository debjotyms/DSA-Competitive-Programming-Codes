#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector <int> v;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int ans=0;
    for(int i =1;i<n-1;i++){
        if((v[i]>v[i-1])&&(v[i]<v[i+1]) || (v[i]<v[i-1])&&(v[i]>v[i+1])){
            ans++;
        }
    }
    cout<<ans;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}