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
    map<string, ll> mp;
    ll n; cin>>n;
    n*=2;
    while(n--){
        string s; cin>>s;
        mp[s]+=1;
    }
    ll mxn=0;
    string mxs;
    for(auto x:mp){
        if(x.second>mxn && x.first!="Penguin"){
            mxn=x.second;
            mxs=x.first;
        }
    }
    cout<<mxs<<" Penguin"<<endl;
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