#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    vector <int> v;
    int cnt = 0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        set <int> st;
        while(a){
            int b = a%10;
            st.insert(b);
            a=a/10;
        }
        vector <int> v(st.begin(),st.end());
        if(v.size()>=k+1 && v[k]==k){
            cnt++;
        }
    }
    cout<<cnt;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}