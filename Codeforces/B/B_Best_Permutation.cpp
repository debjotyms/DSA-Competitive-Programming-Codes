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
    if(n==1){
        cout<<1<<endl;
    }else if(n==2){
        cout<<1<<" "<<2<<endl;
    }else if(n==3){
        cout<<2<<" "<<1<<" "<<3<<endl;
    }else{
        vector<int>v;
        for(int i=n-2;i>=1;i--){
            v.push_back(i);
        }
        if(n%2==0){
            for(auto x:v) cout<<x<<" ";
        }else{
            swap(v[0],v[1]);
            for(auto x:v) cout<<x<<" ";
        }
        cout<<n-1<<" "<<n<<endl;
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