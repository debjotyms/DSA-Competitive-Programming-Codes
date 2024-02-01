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
    ll n,k; cin>>n>>k;
    vi v(n); vin;
    vi res;
    sort(all(v));
    ll ans =1;
    ll temp=1;
    for(ll i=0;i<n-1;i++){
        if(v[i+1]-v[i]<=k){
            temp++;
        }else{
            ans=max(ans,temp);
            temp=1;
        }
    }
    ans=max(ans,temp);
    cout<<n-ans<<endl;
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