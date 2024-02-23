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
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        mp[a]++;
    }
    if(mp.size()==1) cout<<"Yes"<<endl;
    else if(mp.size()==2){
        vi v;
        for(auto x:mp) v.push_back(x.second);
        if(abs(v[0]-v[1])<=1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
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