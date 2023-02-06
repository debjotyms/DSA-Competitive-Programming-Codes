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
    string a,b; cin>>a>>b;
    if(a==b){
        cout<<"="<<endl;
        return;
    }
    if(a[a.size()-1]<b[b.size()-1]) cout<<">"<<endl;
    else if(a[a.size()-1]>b[b.size()-1]) cout<<"<"<<endl;
    else{
        if(a.size()>b.size() && a[a.size()-1]=='S') cout<<"<"<<endl;
        else if(a.size()<b.size() && a[a.size()-1]=='S') cout<<">"<<endl;
        else if(a.size()>b.size() && a[a.size()-1]=='L') cout<<">"<<endl;
        else cout<<"<"<<endl;
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