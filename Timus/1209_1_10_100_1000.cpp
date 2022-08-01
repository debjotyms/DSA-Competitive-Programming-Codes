#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    set <ll> st;
    int temp = 1;
    for(ll i=1;i<=2147483648;){
        st.insert(i);
        i+=temp;
        temp++;
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        auto it = st.find(n);
        if(it!=st.end()) cout<<1<<" ";
        else cout<<0<<" ";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}