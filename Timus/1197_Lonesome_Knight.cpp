#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
ll dx[] = {-2,-2,2,2,-1,-1,1,1};
ll dy[] = {-1,1,-1,1,-2,2,-2,2};
void solve(){
    string s; cin>>s;
    ll x = s[0]-'a'+1;
    ll y = s[1]-'0';
    ll cnt=0;
    for(ll i=0;i<8;i++){
        ll ax=x+dx[i];
        ll ay=y+dy[i];
        if(ax<=8 && ax>=1 && ay<=8 && ay>=1) cnt++;
    }
    cout<<cnt<<endl;
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