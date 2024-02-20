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

vi mem(200001);

ll digisum(ll n){
    ll tsum=0;
    while(n){
        tsum+=(n%10);
        n=n/10;
    }
    return tsum;
}

void solve(){
    ll n; cin>>n; cout<<mem[n]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    for(ll i=1;i<=200001;i++) mem[i]=mem[i-1]+digisum(i);
    while(t--) solve();
    return 0;
}