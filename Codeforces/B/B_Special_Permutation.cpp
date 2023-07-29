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
    int n,a,b; cin>>n>>a>>b;
    vector<int> v;
    v.push_back(a);
    for(int i=n;i>=1;i--){
        if(i!=a && i!=b){
            v.push_back(i);
        }
    }
    v.push_back(b);
    if(*min_element(v.begin(),v.begin()+n/2)==a && *max_element(v.begin()+n/2,v.end())==b){
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
    }else{
        cout<<-1<<endl;
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