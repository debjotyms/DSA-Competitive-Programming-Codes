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
    ll a,b,c,d; cin>>a>>b>>c>>d;
    if(d-b<0){
        cout<<-1<<endl;
        return;
    }else if(((a+(d-b))-c)<0){
        cout<<-1<<endl;
        return;
    }
    cout<<(d-b)+((a+(d-b))-c)<<endl;
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