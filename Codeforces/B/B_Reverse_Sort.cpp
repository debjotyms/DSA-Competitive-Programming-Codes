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
    string s; cin>>s;
    int i=0, j=n-1;
    vi v;
    while(i<j){
        if(s[i]=='1' and s[j]=='0'){
            v.push_back(i+1);
            v.push_back(j+1);
            i++; j--;
        }
        if(s[i]!='1') i++;
        if(s[j]!='0') j--;
    }
    if(v.size()!=0) cout<<1<<endl;
    sort(all(v));
    cout<<v.size()<<" ";
    for(auto x:v){
        cout<<x<<" ";
    }
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