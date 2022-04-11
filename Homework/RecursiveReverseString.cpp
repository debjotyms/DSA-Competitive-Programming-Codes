#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
int len;
string s; 
void sRev(int a){
    if(a==-1){
        return;
    }
    cout<<s[a];
    sRev(a-1);
}
void solve(){
    cin>>s;
    len = s.size();
    sRev(len-1);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}