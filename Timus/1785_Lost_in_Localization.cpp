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
    if(n<=4) cout<<"few"<<endl;
    else if(n<=9) cout<<"several"<<endl;
    else if(n<=19) cout<<"pack"<<endl;
    else if(n<=49) cout<<"lots"<<endl;
    else if(n<=99) cout<<"horde"<<endl;
    else if(n<=249) cout<<"throng"<<endl;
    else if(n<=499) cout<<"swarm"<<endl;
    else if(n<=999) cout<<"zounds"<<endl;
    else cout<<"legion"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}