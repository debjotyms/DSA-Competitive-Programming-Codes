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
    ll res=-1;
    for(ll i=1;i<=100;i++){
        for(ll j=1;j<=100;j++){
            for(ll k=1;k<=100;k++){
                if((pow(i,n)+pow(j,n)==pow(k,n)) and (i!=j and j!=k and k!=i)){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return;
                }
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
    //cin>>t;
    while(t--) solve();
    return 0;
}