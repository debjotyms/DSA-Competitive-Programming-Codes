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
    int n,k; cin>>n>>k;
    set<int> st;
    queue<int> q;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        auto it=st.find(a);
        if(it==st.end()){
            if(st.size()==k){
                st.erase(q.front());
                q.pop();
            }
            st.insert(a);
            q.push(a);
        }
    }
    vi v;
    while(q.size()!=0){
        v.push_back(q.front());
        q.pop();
    }
    reverse(all(v));
    cout<<st.size()<<endl;
    for(int i=0;i<st.size();i++) cout<<v[i]<<" ";
    cout<<endl;
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