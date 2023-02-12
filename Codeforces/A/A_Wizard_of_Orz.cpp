#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
vector <int> v;
void solve(){
    int n; cin>>n;
    v.push_back(9);
    v.push_back(8);
    v.push_back(9);
    int mx = 300000;
    while(mx){
        for(int i=0;i<=9;i++){
            v.push_back(i);
            mx--;
        }
    }
    for(int i=0;i<n;i++) cout<<v[i];
    cout<<endl;
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