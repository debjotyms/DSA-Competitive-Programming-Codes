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
    ll a1, a2, b1, b2, c1, c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;

    ll res = 1;
    
    ll xdifb = a1-b1;
    ll xdifc = a1-c1;
    ll ydifb = a2-b2;
    ll ydifc = a2-c2;

    if((xdifb>=0 and xdifc<=0) or (xdifb<=0 and xdifc>=0)) res+=0;
    else res+=(min(abs(xdifb),abs(xdifc)));

    if((ydifb>=0 and ydifc<=0) or (ydifb<=0 and ydifc>=0)) res+=0;
    else res+=(min(abs(ydifb),abs(ydifc)));

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