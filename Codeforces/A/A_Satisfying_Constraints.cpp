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
    ll mn = 0, mx = 10000000000;
    vi dist;

    while(n--){
        ll a,b; cin>>a>>b;
        if(a==1 and mn<b){
            mn=b;
        }else if(a==2 and mx>b){
            mx=b;
        }else{
            dist.push_back(b);
        }
    }

    ll res = mx-mn+1;
    for(auto x:dist){
        if(x>=mn and x<=mx) res--;
    }

    if(res<0) res=0;
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