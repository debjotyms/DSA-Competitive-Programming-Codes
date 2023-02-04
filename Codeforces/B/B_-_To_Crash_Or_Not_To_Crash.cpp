#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void checker(string s){
    int i=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='=') break; 
    }
    i++;
    for(;i<s.size();i++){
        if(s[i]!='.'){
            cout<<s[i]<<endl;
            return;
        }
    }
    cout<<"You shall pass!!!"<<endl;
}
void solve(){
    string s1; cin>>s1;
    string s2; cin>>s2;
    string s3; cin>>s3;
    for(auto x:s1) if(x=='=') checker(s1);
    for(auto x:s2) if(x=='=') checker(s2);
    for(auto x:s3) if(x=='=') checker(s3);
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}