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
    ll n; cin>>n;
    string s = "0abcdefghijklmnopqrstuvwxyz";
    for(ll i=1;i<=26;i++){
        for(ll j=1;j<=26;j++){
            for(ll k=1;k<=26;k++){
                if(i+j+k==n){
                    cout<<s[i]<<s[j]<<s[k]<<endl;
                    return;
                }
            }
        }
    }
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