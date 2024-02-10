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
    string s; cin>>s;
    ll hash=0;
    ll most=0;
    for(auto x:s) if(x=='#') hash++;
    for(ll i=0;i<n;i++){
        if(s[i]=='.'){
            ll tcount=1;
            while(s[i+1]=='.'){
                tcount++;
                i++;
            }
            most=max(most,tcount);
        }
    }
    if(most<3) cout<<n-hash<<endl;
    else cout<<2<<endl;
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