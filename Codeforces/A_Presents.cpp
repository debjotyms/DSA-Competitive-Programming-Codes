#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    vector <pair<int,int>> vp;
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        vp.push_back(make_pair(a,i));
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<n;i++){
        cout<<vp[i].second<<" ";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}