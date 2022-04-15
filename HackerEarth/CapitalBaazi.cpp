#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
string upper(string s){
    int slen = s.size();
    for(int i=0;i<slen;i++){
        s[i] = s[i]-'a'+'A';
    }
    return s;
}
void solve(){
    while(1){
        string s; cin>>s;
        if(s=="") break;
        cout<<upper(s)<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}