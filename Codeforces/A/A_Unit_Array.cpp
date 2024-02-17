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
    ll neg=0, pos=0;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        if(a<0) neg++;
        else pos++;
    }
    ll beshi = (neg-pos+1)/2;
    ll res=0;
    if(beshi>0){
        res+=beshi;
        neg-=beshi;
    }
    if(neg%2==1) res+=1;
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