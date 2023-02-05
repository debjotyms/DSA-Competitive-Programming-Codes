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
    vi ans;
    vi ans2;
    if((*max_element(all(v)))!=v[0]&&(*max_element(all(v)))!=v[n-1]) cout<<-1<<endl;
    else{
        for(int i=0;i<n/2;i++){
           ans.push_back(v[n-i-1]);
           ans2.push_back(v[i]);
        }
        reverse(all(ans2));
        if(n%2==1) cout<<v[n/2]<<" ";
        for(auto x:ans2) cout<<x<<" ";
        for(auto x:ans)  cout<<x<<" ";
        cout<<endl;
    } 
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