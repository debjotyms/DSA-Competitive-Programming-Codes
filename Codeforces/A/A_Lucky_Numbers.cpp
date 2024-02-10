#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

ll max_min_founder(ll n){
    ll max_digit = n%10;
    ll min_digit = n%10;
    while(n){
        max_digit = max(max_digit, n%10);
        min_digit = min(min_digit, n%10);
        n/=10;
    }
    return abs(max_digit-min_digit);
}

void solve(){
    ll a, b; cin>>a>>b;
    ll dif = abs(a-b);

    ll res = 0;
    ll counter = 0;
    ll luckyness = -1;
    
    for(ll i=a;i<=b and counter<=100;i++){
        if(luckyness<max_min_founder(i)){
            res = i;
            luckyness = max_min_founder(i);
        }
        counter++;
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