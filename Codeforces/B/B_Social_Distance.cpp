#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <LL>
#define VIN for(int &x:v) cin>>x;
#define VOUT for(int x:v) cout<<x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    LL t; cin>>t;
    for(LL i=0;i<t;i++){
        LL p,c; cin>>p>>c;
        VI co;
        for(LL j=0;j<p;j++){
            LL con; cin>>con;
            co.PB(con);
        }
        sort(co.begin(),co.end());
        LL ans=0;
        LL j;
        for(j=0;j<p;j++){
            ans = ans + ((2*co[j]+1)-co[j]);
        }
        ans = ans+co[j-1]-co[0];
        if(ans<=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}