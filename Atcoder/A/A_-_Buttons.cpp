#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b; cin>>a>>b;
    if(a==b){
        cout<<2*a;
    }else{
        a = max(a,b);
        cout<<2*a-1;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}