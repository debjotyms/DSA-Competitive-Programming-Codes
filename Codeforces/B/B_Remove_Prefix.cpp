#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    vi v(n); vin;
    int ans=0;
    set <int> st;
    for(int i=n-1;i>=0;i--){
        st.insert(v[i]);
        ans++;
        if(st.size()!=ans){
            ans--;
            break;
        }
    }
    cout<<n-ans<<endl;
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