#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        long long deci = 0;
        for(int i=0,j=n-1;i<n;i++){
            long long bin = s[j--]-'0';
            deci = deci + (pow(2,i)*bin);
        }
        cout<<deci<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}