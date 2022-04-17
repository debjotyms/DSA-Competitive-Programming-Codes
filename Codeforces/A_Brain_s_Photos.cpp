#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int a,b; cin>>a>>b;
    string s="";
    for(int i=0;i<a*b;i++){
        char c; cin>>c;
        s.PB(c);
    }
    int cnt = 0;
    for(int i=0;i<a*b;i++){
        if(s[i]=='B' || s[i]=='W' || s[i]=='G') cnt++;
    }
    if(cnt==s.size()) cout<<"#Black&White";
    else cout<<"#Color";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}