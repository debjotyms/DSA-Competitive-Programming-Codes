#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int counter = 0;
    vector <char> ch {'a','e','i','o','u'};
    for(int i=0;i<n;i++){
        auto it = find(ch.begin(),ch.end(),s[i]);
        if(it!=ch.end()){
            counter=0;
        }else{
            counter++;
        }
        if(counter>=4){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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