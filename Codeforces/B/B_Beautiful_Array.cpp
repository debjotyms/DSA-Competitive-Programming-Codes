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
    ll n,k,b,s; cin>>n>>k>>b>>s;
    if(k*b>s){
        cout<<-1<<endl;
        return;
    }else{
        ll lv=min(s,(k*b)+(k-1));
        vector<ll> v(n);
        v[n-1]=lv;
        s=s-lv;
        if(s>((n-1)*(k-1))){
            cout<<-1<<endl;
            return;
        }
        for(int i=n-2;i>=0;i--){
            if(s<=k-1){
                v[i]=s;
                s=0;
            }else{
                v[i]=k-1;
                s=s-(k-1);
            }
        }
        vout;
        cout<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}