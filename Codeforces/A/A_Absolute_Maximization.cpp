#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int a=v[0], b=v[0];
    for(int i=1;i<n;i++){
        a&=v[i];
        b|=v[i];
    }
    cout<<b-a<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}