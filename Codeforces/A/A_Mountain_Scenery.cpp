#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    VI v;
    for(int i=0;i<(2*n+1);i++){
        int a; cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<(2*n+1);i++){
        if(i%2==1 && (v[i]-1)>v[i-1] && (v[i]-1)>v[i+1] && k>0){
            cout<<(v[i]-1)<<" ";
            k--;
        }else{
            cout<<v[i]<<" ";
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}