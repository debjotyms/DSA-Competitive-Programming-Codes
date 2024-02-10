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
    string n; cin>>n;
    vi v; v.push_back(0);
    for(auto x:n){
        v.push_back(x-'0');
    }

    reverse(all(v));
    // for(auto x:v) cout<<x; cout<<endl;

    ll pos = -1;
    ll val = -1;

    for(ll i=0;i<v.size()-1;i++){
        if(v[i]>=5){
            pos = i+1;
            v[i+1] = v[i+1]+1;
            val = v[i+1];
        }else if(v[i]==9){
            while(v[i]!=9){
                i++;
            }
            pos = i;
            val = v[i]+1;
        }
    }

    if(pos == -1){
        reverse(all(v));
        for(ll i=1;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }

    for(ll i=0;i<pos;i++) v[i] = 0;

    reverse(all(v));

    if(v[0]==0){
        for(ll i=1;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
    }else{
        for(ll i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
    }
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