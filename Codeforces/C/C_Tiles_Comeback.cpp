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
    ll n, k; cin>>n>>k;
    vi v(n); vin;
    ll a = -1, b = n;
    ll cnt = 0;
    for(ll i=0;cnt!=k and i<n;i++){
        if(v[i]==v[0]) cnt++;
        a++;
    }

    if(v[0]==v[n-1]){
        if(cnt==k){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }

    cnt = 0;
    for(ll i=n-1; cnt!=k and i>=0;i--){
        if(v[i]==v[n-1]) cnt++;
        b--;
    }

    if(a<=b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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