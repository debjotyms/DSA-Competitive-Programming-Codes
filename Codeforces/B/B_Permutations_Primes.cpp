#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    ll n; cin>>n;
    vi v;
    if(n>1) v.push_back(2);
    for(ll i=4;i<=n;i++) v.push_back(i);
    if(n>2) v.push_back(3);
    ll flag = false;

    for(ll i=0;i<n-1;i++){
        if(i == n/2){
            flag = true;
            cout<<1<<" ";
        }
        cout<<v[i]<<" ";
    }
    if(!flag) cout<<1;
    cout<<endl;
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