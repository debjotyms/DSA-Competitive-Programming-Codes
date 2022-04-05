#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        vector <LL> v;
        int n; cin>>n;
        for(int i=0;i<n;i++){
            LL a; cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        cout<<v[n-1]+v[n-2]<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}