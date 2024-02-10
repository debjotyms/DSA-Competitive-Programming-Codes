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
    ll xa,ya,xb,yb,xc,yc,xd,yd;
    cin>>xa>>ya>>xb>>yb>>xc>>yc>>xd>>yd;
    ll da=((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    ll db=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
    ll dc=sqrt((xd-xb)*(xd-xb)+(yd-yb)*(yd-yb));
    cout<<min(min(da,db),dc)*min(min(da,db),dc)<<endl;
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