#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
int c = 1;
void solve(){
    ll s; cin>>s;
    ll temp = ceil(sqrt(s));
    ll x,y;
    if(temp%2==0){
        if((s+temp-1) == temp*temp){
            y = temp;
            x = temp;
        }else if(s+temp-1>temp*temp){
            y = ((temp*temp) - s) + 1;
            x = temp;
        }else{
            y = temp;
            x = (2*temp) - (((temp*temp) - s) + 1);
        }
    }else{
        if((s+temp-1) == temp*temp){
            x = temp;
            y = temp;
        }else if(s+temp-1>temp*temp){
            x = ((temp*temp) - s) + 1;
            y = temp;
        }else{
            x = temp;
            y = (2*temp) - (((temp*temp) - s) + 1);
        }
    }
    printf("Case %d: %lld %lld\n",c,x,y);
    c++;
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