#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int m,n; cin>>m>>n;
    set <int> st;
    set <int> st2;
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        st.insert(b);
    }
    for(int i=0;i<n;i++){
        int a; cin>>a;
        st2.insert(a);
    }
    vector <int> v;
    vector <int> v2;
    v.assign(st.begin(),st.end());
    v2.assign(st2.begin(),st2.end());
    if(v.size()==v2.size()){
        for(int i=0;i<v2.size();i++){
            if(v[i]!=v2[i]){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}