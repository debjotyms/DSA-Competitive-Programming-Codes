#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    string a,b; cin>>a>>b;
    if(a!=b) cout<<max(a.length(),b.length());
    else cout<<-1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}