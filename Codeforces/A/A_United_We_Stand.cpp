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
    ll mx = *max_element(all(v));
    ll cntMax = count(all(v), mx);

    if(cntMax == n) cout<<-1<<endl;
    else{
        ll lb = n - cntMax;
        ll lc = cntMax;
        sort(all(v));
        cout<<lb<<" "<<lc<<endl;
        for(ll i=0;i<lb;i++) cout<<v[i]<<" "; cout<<endl;
        for(ll i=0;i<lc;i++) cout<<mx<<" "; cout<<endl;
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