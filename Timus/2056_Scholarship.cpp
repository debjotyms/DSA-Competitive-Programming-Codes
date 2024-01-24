#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef double ll;
long long cs = 1;

void solve(){
    // Satisfactory - 3
    // Good - 4
    // Excellent - 5

    // Any 3 - None
    // All 5 - Personal
    // Average More than 4.5 - High
    // No 3 and Average less than 4.5 - Common

    ll n, c=0,d=0,e=0; cin>>n;
    ll t = 0;
    ll l = n;
    while(l--){
        ll a; cin>>a; t+=a;
        if(a==3) c++;
        else if(a==4) d++;
        else e++;
    }
    t/=n;
    
    if(e==n) cout<<"Named"<<endl;
    else if(t>=4.5 and c==0) cout<<"High"<<endl;
    else if(c==0) cout<<"Common"<<endl;
    else cout<<"None"<<endl;
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