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
        int n,q; cin>>n>>q;
        int arr[n+10];
        int arr2[n+10];
        int arr3[n+10];
        arr2[0]=arr3[n+1]=0;
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=1;i<=n;i++){
            arr2[i]=__gcd(arr[i],arr2[i-1]);
        }
        for(int i=n;i>=1;i--){
            arr3[i]=__gcd(arr[i],arr3[i+1]);
        }
        while(q--){
            int l,r; cin>>l>>r;
            int gcd = 0;    
            gcd = __gcd(arr2[l-1],arr3[r+1]);
            cout<<gcd<<endl;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}