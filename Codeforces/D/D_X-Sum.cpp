#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n,m; cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a; cin>>a;
            arr[i][j] = a;
        }
    }
    int maxSum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int ti,tj,tSum=0; tSum+=arr[i][j];
            for(ti=i-1,tj=j-1;ti!=-1&&tj!=-1;ti--,tj--) tSum+=arr[ti][tj];
            for(ti=i-1,tj=j+1;ti!=-1&&tj!=m;ti--,tj++) tSum+=arr[ti][tj];
            for(ti=i+1,tj=j+1;ti!=n&&tj!=m;ti++,tj++) tSum+=arr[ti][tj];
            for(ti=i+1,tj=j-1;ti!=n&&tj!=-1;ti++,tj--) tSum+=arr[ti][tj];
            if(tSum>maxSum) maxSum=tSum;
        }
    }
    cout<<maxSum<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}