#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void calc(){
    vi v = {2, 4, 8, 3, 6, 5, 10, 7, 9, 1};
    for(ll i=0;i<v.size();i++){
        cout<<__gcd(v[i],v[(i+1)%(v.size())])<<" ";
    }
}



void solve(){
    ll n; cin>>n;
    vi v(n+1,0);
    for(ll i=2;i<=n;i++){
        ll p = i;
        while(p<=n and v[p]== 0){
            cout<<p<<" ";
            v[p]++;
            p*=2;
        }
    }
    cout<<1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // calc();
    // return 0;
    cin>>t;
    while(t--) solve();
    return 0;
}