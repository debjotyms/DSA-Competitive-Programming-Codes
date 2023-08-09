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
    vi v(n); vin;

    ll oddSum = 0;
    ll evenSum = 0;

    ll cnt = 0;
    ll maxNum = LONG_LONG_MIN;

    for(ll i=0;i<n;i++){
        if(v[i]<0) cnt++;
        maxNum = max(maxNum, v[i]);
        if(i%2==0 and v[i]>0) oddSum+=v[i];
        else if(i%2==1 and v[i]>0) evenSum+=v[i];
    }

    if(cnt==n){
        cout<<maxNum<<endl;
        return;
    }
    cout<<max(oddSum, evenSum)<<endl;
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