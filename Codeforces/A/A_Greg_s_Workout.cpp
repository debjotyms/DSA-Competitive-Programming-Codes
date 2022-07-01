#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a=0,b=0,c=0;
    for(int i=1;i<=n;i++){
        int p; cin>>p;
        if(i%3==0) c+=p;
        else if(i%3==2) b+=p;
        else if(i%3==1) a+=p;
    }
    if(a>b && a>c) cout<<"chest";
    else if(b>a && b>c) cout<<"biceps";
    else if(c>a && c>b) cout<<"back";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}