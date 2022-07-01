#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
int solve(){
    int n; cin>>n;
    VI a;
    VI b;
    for(int i=0;i<n;i++){
        int c,d;cin>>c>>d;
        a.PB(c);
        b.PB(d);
        if(c!=d){
            cout<<"rated";
            return 0;
        }
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    if(a==b){
        cout<<"maybe";
    }else{
        cout<<"unrated";
    }
    return 0;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}