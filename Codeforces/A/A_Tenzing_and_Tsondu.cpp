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
    ll a, b; cin>>a>>b;
    ll ta=0, tb=0;

    while(a--){
        ll temp; cin>>temp;
        ta+=temp;
    }
    while(b--){
        ll temp; cin>>temp;
        tb+=temp;
    }

    if(ta>tb) cout<<"Tsondu"<<endl;
    else if(tb>ta) cout<<"Tenzing"<<endl;
    else cout<<"Draw"<<endl;
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