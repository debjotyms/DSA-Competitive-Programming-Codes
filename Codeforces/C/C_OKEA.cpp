#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n,m; cin>>n>>m;
    if(m==1){
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            cout<<i+1<<endl;
        }
    }else if(n%2==0){
        cout<<"YES\n";
        int odd=1,even=2;
        for(int i=0;i<n;i+=2){
            for(int j=0;j<m;j++){
                cout<<odd<<" ";
                odd+=2;
            }
            cout<<endl;
            for(int j=0;j<m;j++){
                cout<<even<<" ";
                even+=2;
            }
            cout<<endl;
        }
    }else{
        cout<<"NO\n";
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