#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
char cng(char a, char b){
    int i;
    for(i=0;i<k.size();i++){
        if(k[i]==a) break;
    }
    if(b=='R'){
        return k[i-1];
    }else{
        return k[i+1];
    }
}
void solve(){
    char c; cin>>c;
    string s; cin>>s;
    int ln = s.size();
    string ans = "";
    for(int i=0;i<ln;i++){
        ans.push_back(cng(s[i],c));
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