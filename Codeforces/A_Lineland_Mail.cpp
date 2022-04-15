#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    VI v(n);
    VIN
    for(int i=0;i<n;i++){
        int mn,mx;
        if(i==0){
            mn = abs(v[0]-v[1]);
            mx = abs(v[0]-v[n-1]);
        }else if(i==n-1){
            mn = abs(v[n-1]-v[n-2]);
            mx = abs(v[0]-v[n-1]);
        }else{
            mn = min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            mx = max(abs(v[i]-v[0]),abs(v[i]-v[n-1]));
        }
        cout<<mn<<" "<<mx<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}