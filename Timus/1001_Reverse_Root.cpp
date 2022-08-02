#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    vector<double> vv;
    double t;
    while(cin>>t){
        vv.PB(sqrt(t));
    }
    cout<<fixed<<setprecision(4);
    for(int i=vv.size()-1;i>=0;i--){
        cout<<vv[i]<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}