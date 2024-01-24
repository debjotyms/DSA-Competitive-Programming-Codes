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

    ll st = 0;
    ll temp = 0;

    for(ll i=0;i<n-1;i++){
        if(s[i]=='A'){
            while(true){
                if(s[i]=='B' and s[i+1]=='A') break;
                if(i==n-1) break;
                i++;
                temp++;
            }
        st++;
        }
    }

    ll ans = temp+st-1;
    
    if(ans<0) cout<<0<<endl;
    else cout<<ans<<endl;
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