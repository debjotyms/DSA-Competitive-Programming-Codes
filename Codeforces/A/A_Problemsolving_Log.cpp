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

ll asciitoval(char ch){
    return ch-'A'+1;
}

void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    map <char, ll> mp;
    for(auto x:s){
        mp[x]+=1;
    }

    ll ans = 0;

    for(auto x:mp){
        if(mp[x.first] >= asciitoval(x.first)) ans+=1;
    }

    cout<<ans<<endl;
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