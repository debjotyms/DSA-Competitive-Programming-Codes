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
    vector<string>vs;
    for(ll i=0;i<10;i++){
        string s; cin>>s;
        vs.push_back(s);
    }
    ll res=0;
    for(int i=0; i < 10;i++){
        for(int j=0; j < 10;j++){
            if(vs[i][j]=='X'){
                res+=(min(min(i,10-i-1),min(j,10-j-1)))+1;
            }
        }
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}