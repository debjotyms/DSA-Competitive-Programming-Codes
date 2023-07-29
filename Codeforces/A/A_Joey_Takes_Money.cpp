#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n; cin>>n;
    long long ans=1;
    for(int i=0;i<n;i++){
        long long a; cin>>a;
        ans*=a;
    }
    cout<<(ans+n-1)*2022<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}