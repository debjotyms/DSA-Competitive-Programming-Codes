#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin(v) for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    ll a,b; cin>>a>>b;
    vi va(a),vb(b);
    vin(va); vin(vb);
    sort(all(va));
    sort(all(vb));
    ll res = 0;
    ll Asuru=0,Asesh=a-1,Bsuru=0,Bsesh=b-1;
    ll loop=0;
    while(loop<a){
        if(abs(va[Asuru]-vb[Bsesh])>abs(va[Asesh]-vb[Bsuru])) res+=abs(va[Asuru++]-vb[Bsesh--]);
        else res+=abs(va[Asesh--]-vb[Bsuru++]);
        loop++;
    }
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