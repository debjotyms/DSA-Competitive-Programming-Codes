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
    map<char,ll> mp;
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    mp['d'] = 1;
    mp['e'] = 2;
    mp['f'] = 3;
    mp['g'] = 1;
    mp['h'] = 2;
    mp['i'] = 3;
    mp['j'] = 1;
    mp['k'] = 2;
    mp['l'] = 3;
    mp['m'] = 1;
    mp['n'] = 2;
    mp['o'] = 3;
    mp['p'] = 1;
    mp['q'] = 2;
    mp['r'] = 3;
    mp['s'] = 1;
    mp['t'] = 2;
    mp['u'] = 3;
    mp['v'] = 1;
    mp['w'] = 2;
    mp['x'] = 3;
    mp['y'] = 1;
    mp['z'] = 2;
    mp['.'] = 1;
    mp[','] = 2;
    mp['!'] = 3;
    mp[' '] = 1;

    string s; getline(cin, s);
    ll res = 0;
    
    for(auto x:s){
        res+=mp[x];
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}