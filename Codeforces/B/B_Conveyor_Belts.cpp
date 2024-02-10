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
    ll n,a,b,x,y; cin>>n>>a>>b>>x>>y;
    
    if(a>(n/2)) a = n-a+1;
    if(b>(n/2)) b = n-b+1;
    if(x>(n/2)) x = n-x+1;
    if(y>(n/2)) y = n-y+1;
    
    ll from = min(a,b);
    ll to = min(x,y);

    cout<<abs(from-to)<<endl;
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