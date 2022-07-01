#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;

    string oddf = "I hate it";
    string evenf = "I love it";
    string hate = "I hate that";
    string love = "I love that";

    for(int i=1;i<n;i++){
        if(i%2==1){
            cout<<hate<<" ";
        }else{
            cout<<love<<" ";
        }
    }

    if(n%2==1){
        cout<<oddf;
    }else{
        cout<<evenf;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}