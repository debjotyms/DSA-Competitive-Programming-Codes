#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
const int cnst = 1001;
int arr[cnst];
void solve(){
    int n,mx=0; cin>>n;
    FL(i,0,n,1){
        int a; cin>>a;
        arr[a]+=1;
        if(arr[a]>mx) mx=arr[a];
    }
    if(mx>((n+1)/2)) cout<<"NO";
    else cout<<"YES";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}