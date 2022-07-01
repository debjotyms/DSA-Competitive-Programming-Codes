#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    int min = 110, max = 0, mini=0, maxi=0;
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        if(a<=min){
            min = a;
            mini = i;
        }
        if(a>max){
            max = a;
            maxi = i;
        }
    }
    // cout<<mini<<" "<<maxi<<endl;
    if(mini<maxi){
        cout<<(maxi-1)+(n-mini)-1;
    }else{
        cout<<(maxi-1)+(n-mini);
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}