#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void printVector(vector<vector<long long>>v,int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

const int N = 10e3+10;
vector<vector<long long>>v(N,vector<long long>(N));

void solve(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a; cin>>a;
            v[i][j] = a + v[i-1][j] + v[i][j-1] - v[i-1][j-1];
        }
    }
    // printVector(v,n);
    int q; cin>>q;
    while(q--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        long long sum = v[c][d] - v[a-1][d] - v[c][b-1] + v[a-1][b-1];
        cout<<sum<<endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}