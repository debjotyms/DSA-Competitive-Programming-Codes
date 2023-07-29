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
    bool is_found = false;
    vector<char> vc;
    ll pos = 0;
    for(ll i=1;i<=8*8;i++){
        char c; cin>>c;
        if(is_found==false and c>='a' and c<='z'){
            is_found = true;
            pos = i%8;
            vc.push_back(c);
            continue;
        }
        if(is_found and i%8==pos and c>='a' and c<='z'){
            vc.push_back(c);
            continue;
        }
    }
    for(auto x:vc){
        cout<<x;
    }
    cout<<endl;
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