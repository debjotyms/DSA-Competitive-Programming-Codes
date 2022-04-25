#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
const int N = 1e7+9;
long long int arr[N];
void solve(){
    int n,q; cin>>n>>q;
    for(int i=1;i<=q;i++){
        int l,r,c; cin>>l>>r>>c;
        arr[l]+=c;
        arr[r+1]-=c;
    }
    for(int i=0;i<=n;i++){
        arr[i]+=arr[i-1];
    }
    long long mx = 0;
    for(int i=1;i<=n;i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
    cout<<mx;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}