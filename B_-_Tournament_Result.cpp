#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n; cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
        string s; cin>>s;
        for(int j=0;j<n;j++){
            arr[i][j] = s[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else if(arr[i][j]=='D' && arr[j][i]=='D') continue;
            else if((arr[i][j]=='D' && arr[j][i]!='D') || (arr[i][j]!='D' && arr[j][i]=='D')){
                cout<<"incorrect\n";
                return;
            }else if(arr[i][j] == arr[j][i]){
                cout<<"incorrect\n";
                return;
            }
        }
    }
    cout<<"correct\n";
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