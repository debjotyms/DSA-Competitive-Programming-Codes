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
    string ns="";
    int flag;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            flag=i;
            break;
        }
        if(i==n-1){
            cout<<0<<endl;
            return;
        }
    }
    for(int i=flag;i<n;i++) ns+=s[i];
    flag=ns.size()-1;
    for(int i=0;i<ns.size();i++){
        if(ns[i]=='0'){
            flag=i;
            break;
        }
    }
    vector<string>vs;
    vs.push_back(ns);
    int j;
    for(int i=1;i<=flag;i++){
        string a="";
        for(j=0;j<ns.size();j++){
            if(j-i>=0) a+=max(ns[j],ns[j-i]);
            else a+=ns[j];
        }
        vs.push_back(a);
    }
    sort(all(vs)); reverse(all(vs));
    cout<<vs[0]<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}