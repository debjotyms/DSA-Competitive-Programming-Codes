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
    ll x,y,n; cin>>x>>y>>n;
    vi v(n);

    v[0] = x;
    v[n-1] = y;
    ll temp = y;
    ll dif = 1;
    for(ll i=n-2;i>0;i--){
        temp-=dif;
        v[i] = temp;
        dif++;
    }

    if(v[1]-v[0]>v[2]-v[1]){
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
    }else{
        cout<<-1<<endl;
    }
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