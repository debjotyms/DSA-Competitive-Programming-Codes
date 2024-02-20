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
    for(ll i=0;i<n;i++){
        string s; cin>>s;
        v.push_back(count(all(s),'1'));
    }
    set<ll> st;
    for(ll x:v) st.insert(x);
    if(st.size()<=2) cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;
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