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
    vector <int> v,v2;
    set <int> st;
    int temp=-1;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        int prev = st.size();
        st.insert(a);
        v.push_back(a);
        v2.push_back(a);
        if(prev==st.size()){
            temp = prev;
        }
    }
    if(temp!=-1){
        cout<<temp<<endl;
    }else{
        int lol=-1;
        for(int i=n-1;i>0;i--){
            if(v[i-1]>v[i]){
                lol=i-1;
                break;
            }
        }
        cout<<lol+1<<endl;
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