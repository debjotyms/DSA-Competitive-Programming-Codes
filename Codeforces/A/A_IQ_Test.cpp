#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    int e=0,o=0,ei,oi;
    VI v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a%2==0){
            e++;
            ei=i;
        }else{
            o++;
            oi=i;
        }
    }
    if(e==1) cout<<ei+1;
    else cout<<oi+1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}