#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    ll n; cin>>n;
    vector <ll> number;
    if(n==0) cout<<10<<endl;
    else if(n==1) cout<<1<<endl;
    else{
        for(int i=9;i>=2;i--){
            while((n%i)==0){
                n/=i;
                number.push_back(i);
            }
        }
        if(n==1){
            reverse(number.begin(),number.end());
            for(ll x:number) cout<<x;
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}