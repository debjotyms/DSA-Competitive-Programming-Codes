#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    sort(s.begin(),s.end());
    if(s[0]==s[1] && s[2]==s[3] && s[0]!=s[2])
        cout<<"Yes";
    else
        cout<<"No";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}