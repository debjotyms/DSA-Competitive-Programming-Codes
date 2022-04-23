#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int a,b,c; cin>>a>>b>>c;
    set <LL> st;
    for(int i=1;i<=1000;i++){
        st.insert((a*i));
        st.insert((b*i));
    }
    auto it = st.begin();
    for(int i=0;i<c-1;i++)
        it++;
    int d;
    if(*it%a==0 && *it%b==0) d = (a*b)/__gcd(a,b);
    else if(*it%a==0) d = a;
    else d = b;
    for(int i = *it;i>=0;i-=d)
        cout<<i<<" ";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}