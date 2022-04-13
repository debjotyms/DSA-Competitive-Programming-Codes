#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
int LinearSearch(VI v,int n,int x){
    int i;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            return i;
        }
    }
    i=-1;
    return i;
}
void solve(){
    VI v{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout<<LinearSearch(v,20,13); //12
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}