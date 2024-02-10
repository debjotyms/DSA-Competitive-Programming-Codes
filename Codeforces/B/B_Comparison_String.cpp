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
    ll n; cin>>n;
    string s; cin>>s;

    ll res = 1;
    ll counter = 1;
    for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1]) counter++;
        else{
            res = max(res,counter);
            counter = 1;
        }
    }
    res = max(res,counter);
    cout<<res+1<<endl;
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