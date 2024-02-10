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
    vi v(n); vin;

    if(n==1){
        cout<<1<<" "<<v[0]<<endl;
    }else{
        ll cnt = 1;
        for(ll i=0; i<n;i++){
            if(i!=n-1 and v[i]==v[i+1]){
                cnt++;
            }else{
                cout<<cnt<<" "<<v[i]<<" ";
                cnt = 1;
            }
        }
    }
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