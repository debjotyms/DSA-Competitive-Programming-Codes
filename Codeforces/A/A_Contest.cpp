#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    a = max((3*a)/10,(a-(a/250)*c));
    b = max((3*b)/10,(b-(b/250)*d));

    if(a==b) cout<<"Tie";
    else if(a>b) cout<<"Misha";
    else cout<<"Vasya";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}