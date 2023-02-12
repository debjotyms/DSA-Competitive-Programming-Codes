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
    vi v(n); vin;
    bool flag=true;
    int j=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(v[i]==0){
            while(j<i){
                if(v[j]==1){
                    swap(v[j++],v[i]);
                    ans++;
                    break;
                }
                j++;
            }
        }
    }
    cout<<ans<<endl;
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