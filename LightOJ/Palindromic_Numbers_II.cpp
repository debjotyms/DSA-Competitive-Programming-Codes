#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        string s = to_string(n);
        string rs = s;
        reverse(s.begin(),s.end());
        if(s==rs) cout<<"Case "<<i<<": Yes"<<"\n";
        else cout<<"Case "<<i<<": No"<<"\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}