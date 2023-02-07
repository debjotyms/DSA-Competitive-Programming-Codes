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
    char ch; cin>>ch;
    string s; cin>>s; s+=s;
    bool flag=false;
    int ans=0,flagIdx=0;
    if(ch=='g') cout<<0<<endl;
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]==ch && !flag){
                flag=true;
                flagIdx=i;
                continue;
            }
            if(flag && s[i]=='g'){
                flag=false;
                ans=max(ans,i-flagIdx);
            }
        }
        cout<<ans<<endl;
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