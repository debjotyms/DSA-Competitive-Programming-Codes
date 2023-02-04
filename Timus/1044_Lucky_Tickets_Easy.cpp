#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
bool checker(ll n, ll d){
    ll sum1=0, sum2=0;
    ll temp=n;
    ll c=0;
    while(c<d/2){
        sum1+=temp%10;
        temp/=10;
        c++;
    }
    c=0;
    while(c<d/2){
        sum2+=temp%10;
        temp/=10;
        c++;
    }
    if(sum1==sum2){
        return true;
    }
    return false;
}
void solve(){
    ll n; cin>>n;
    ll start=pow(10,n-1), end=pow(10,n)-1;
    ll ans=0;
    for(ll i=0;i<=end;i++){
        if(checker(i,n)) ans++;
    }
    cout<<ans<<endl;
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