#include<bits/stdc++.h>
using namespace std;
void solve(){
    double n; cin>>n;
    double tp=0;
    for(int i=0;i<n;i++){
        double a; cin>>a;
        tp = tp + (a/100);
    }
    cout<<(tp/n)*100;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}