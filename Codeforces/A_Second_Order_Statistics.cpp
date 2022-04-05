#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    set <int> st;
    while(n--){
        int a; cin>>a;
        st.insert(a);
    }
    if(st.size()==1) cout<<"NO";
    else{
        set <int> ::iterator it = st.begin();
        cout<<*++it;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}