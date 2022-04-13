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
    vector <int> v(n);
    VIN
    sort(v.begin(),v.end());
    int d = n/3;
    int j = 0;
    int count = 0;
    for(int i=0;i<d;i++){
        int a = v[j]; j++;
        int b = v[j]; j++;
        int c = v[j]; j++;
        int mx = max(a,max(b,c));
        if(5-mx>=k) count++;
    }
    cout<<count;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}