#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    int b = 1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if(b==0){
                cout<<" ";
            }
            i+=2;
        }else{
            cout<<s[i];
            b=0;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}