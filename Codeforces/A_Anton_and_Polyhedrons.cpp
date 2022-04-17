#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    int cnt=0;
    while(n--){
        string s; cin>>s;
        if(s=="Tetrahedron") cnt+=4;
        else if(s=="Cube") cnt+=6;
        else if(s=="Octahedron") cnt+=8;
        else if(s=="Dodecahedron") cnt+=12;
        else cnt+=20;
    }
    cout<<cnt;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}