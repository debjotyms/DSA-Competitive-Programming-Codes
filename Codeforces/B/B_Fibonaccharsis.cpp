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
    ll res = 0;

    for(ll i=0;i<=n;i++){
        ll x = n;
        ll y = i;
        ll checker = 0;
        for(ll j=0;j<k-1;j++){
            ll temp = y;
            y = x-y;
            x = temp;
            checker+=1;

            if(y>x or y<0){
                break;
            }

            if(checker == k-2){
                res++;
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