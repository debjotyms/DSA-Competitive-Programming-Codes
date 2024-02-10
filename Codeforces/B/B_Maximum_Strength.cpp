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
    string a,b; cin>>a>>b;
    ll ldif = b.size()-a.size();
    while(ldif--) a = '0'+a;
    
    ll i=0;
    ll ans = 0;
    while(true){
        if(a[i]!=b[i]){
            ans = int(b[i])-int(a[i]);
            break;
        }
        if(i==a.size()-1) break;
        i++;
    }
    ans+=(9*(a.size()-(i+1)));
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