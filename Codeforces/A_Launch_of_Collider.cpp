#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    string s; cin>>s;
    VI v(t);
    VIN;
    int m = INT_MAX;
    int f = 0;
    for(int i=0;i<t-1;i++){
        if(s[i]=='R' && s[i+1]=='L'){
            f = 1;
            if((v[i+1]-v[i])<m){
                m=v[i+1]-v[i];
            }
        }
    }
    if(f==0){
        cout<<-1;
        return;
    }
    cout<<(m/2);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}