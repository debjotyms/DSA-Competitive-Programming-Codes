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
    vi v;
    ll tot=0;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        tot+=a;
        v.push_back(a);
    }
    tot = tot/n;
    ll e=0;
    for(ll i=0;i<n;i++){
        if(v[i]-tot>=0) e+=v[i]-tot;
        else{
            if(v[i]-tot+e>=0) e+=(v[i]-tot);
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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