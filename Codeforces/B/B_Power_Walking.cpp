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
    set<int> st;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        st.insert(a);
    }
    int diff = st.size();
    for(int i=0;i<n;i++){
        cout<<max(diff,i+1)<<" ";
    }
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