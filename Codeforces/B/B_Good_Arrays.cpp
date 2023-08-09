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
    ll n; cin>>n; 
    vi v(n); vin;

    if(n==1){
        cout<<"NO"<<endl;
        return;
    }


    ll sum = accumulate(all(v), 0LL);
    ll mx = count(all(v), 1);

    ll temp = 2*mx + n-mx;

    if(temp<=sum) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
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