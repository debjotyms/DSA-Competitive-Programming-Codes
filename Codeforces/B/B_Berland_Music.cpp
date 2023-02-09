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
    string s; cin>>s;
    int zero = count(all(s),'0');
    vi vv(n,0);
    vi ze; vi on;
    for(int i=0;i<n;i++){
        if((v[i]<=zero && s[i]=='0')||(v[i]>zero && s[i]=='1')){
            vv[i]=v[i];
            v[i]=0;
        }else{
            if(s[i]=='0') ze.push_back(v[i]);
            else on.push_back(v[i]);
        }
    }
    int z=0,o=0;
    for(int i=0;i<n;i++){
        if(vv[i]==0&&s[i]=='1'){
            vv[i]=ze[z]; z++;
        }else if(vv[i]==0&&s[i]=='0'){
            vv[i]=on[o]; o++;
        }
    }
    for(auto x:vv) cout<<x<<" ";
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