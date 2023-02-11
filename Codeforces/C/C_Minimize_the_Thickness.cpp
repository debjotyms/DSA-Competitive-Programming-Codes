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
    int n; cin>>n;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        int a; cin>>a; sum+=a;
        v.push_back(a);
    }
    int sp=n;
    for(int i=2;i<sqrt(sum);i++){
        if(sum%i==0){
            sp=i;
            break;
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