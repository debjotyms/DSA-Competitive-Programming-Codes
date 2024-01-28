#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    string s="abcdefghijklmnopqrstuvwxyz";
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string rs = s.substr(0,k);
        string res = "";
        for(int i=0;i<n;i++) res=res+rs;
        cout<<res<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t=1;
    // cin>>t;
    solve();
    return 0;
}