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
    int n; cin>>n;
    vi v(n); vin;
    vi a(n);
    a[0]=v[0];
    for(int i=1;i<n;i++){
        a[i]=a[i-1]+v[i];
    }
    if(a[n-2]-v[n-1]>=0){
        cout<<-1<<endl;
        return;
    }
    for(auto x:a) cout<<x<<" ";
    cout<<endl;
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