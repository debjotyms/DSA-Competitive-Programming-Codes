#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(n%2==1 && i==(n/2) && j==0){
                cout<<1<<" ";
                continue;
            }else if(n%2==1 && j==(n/2) && i==0){
                cout<<1<<" ";
                if(j==n-1) cout<<endl;
                continue;
            }
            if(i==j) cout<<1<<" ";
            else if((i+j)==(n-1)) cout<<1<<" ";
            else cout<<0<<" ";
            if(j==n-1) cout<<endl;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}