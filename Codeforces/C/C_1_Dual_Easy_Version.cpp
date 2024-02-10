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
    bool isPos = false;
    ll mxVal = -100;
    ll mxIdx = 0;

    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        if(a>mxVal){
            mxVal = max(mxVal, a);
            mxIdx = i+1;
        }
        if(a>0) isPos = true;
    }

    if(!isPos){
        cout<<n-1<<endl;
        for(ll i=n-1;i>=1;i--) cout<<i<<" "<<i+1<<endl;
        return;
    }

    cout<<5+n+n-1<<endl;
    for(ll i=1;i<=5;i++) cout<<mxIdx<<" "<<mxIdx<<endl;
    for(ll i=0;i<n;i++)  cout<<i+1<<" "<<mxIdx<<endl;
    for(ll i=1;i<n;i++)  cout<<i+1<<" "<<i<<endl;
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