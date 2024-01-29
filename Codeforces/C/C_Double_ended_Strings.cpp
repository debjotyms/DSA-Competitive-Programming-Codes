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

vector<string> sub(string a, ll sz){
    vector<string> vs;
    for(ll j=0;j<sz;j++){
        for(ll k=1;k<=(sz-j);k++){
            ll loop=1;
            ll idx=j;
            string ts = "";
            while(loop<=k){
                ts+=a[idx];
                idx++;
                loop++;
            }
            vs.push_back(ts);
        }
    }
    return vs;
}

void solve(){
    string a,b; cin>>a>>b;
    vector<string> vsa = sub(a, a.size());
    vector<string> vsb = sub(b, b.size());
    ll res = 0;
    for(ll i=0;i<vsa.size();i++){
        for(ll j=0;j<vsb.size();j++){
            if(vsa[i]==vsb[j]){
                ll sz = vsa[i].size();
                res = max(res,sz);
            }
        }
    }
    cout<<a.size()-res+b.size()-res<<endl;
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