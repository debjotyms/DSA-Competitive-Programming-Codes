#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    string a, b; cin>>a>>b;
    vector <ll> na, nb;
    
    // cout<<a.size()<<endl;

    for(ll i=0;i<a.size();i++){
        if(a[i]==b[i]){
            if(a[i]=='0') na.push_back(i+1);
            else nb.push_back(i+1);
        }
    }

    for(ll i=0;i<na.size();i++){
        for(ll j=0;j<nb.size();j++){
            if(na[i]+1==nb[j]){
                cout<<"YES"<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;
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