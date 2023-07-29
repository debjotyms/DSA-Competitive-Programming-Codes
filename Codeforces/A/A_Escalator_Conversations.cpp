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
    ll n, m, k, H; cin>>n>>m>>k>>H;
    vi v(n); vin;
    ll ans=0;

    for(int i=0;i<n;i++){
        if((v[i]>=(H-((m-1)*k)))&&(v[i]<=(H+((m-1)*k)))){
            if(abs(v[i]-H)%k==0 and v[i]!=H){
                ans+=1;
            }
        }
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