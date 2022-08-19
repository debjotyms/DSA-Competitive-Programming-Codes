#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    int swth=0;
    for(int i=0;i<s.size();i++){
        if((i+1)%2==0 && s[i]=='R'){
            swth++;
            break;
        }
        if((i+1)%2==1 && s[i]=='L'){
            swth++;
            break;
        }
    }
    if(swth==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}