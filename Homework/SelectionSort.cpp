#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    vector <int> v;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n-1;i++){
        int min=i+1;
        for(int j=i+1;j<n;j++){
            if(v[min]>v[j]) min=j;
        }
        if(v[i]>v[min]) swap(v[i],v[min]);
    }
    for(int i:v) cout<<i<<" ";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}