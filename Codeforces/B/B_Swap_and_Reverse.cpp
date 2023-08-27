#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

string algo(string s){
    string a = "";
    string b = "";

    for(ll i=0;i<s.size();i++){
        if(i%2==0){
            a.push_back(s[i]);
        }else{
            b.push_back(s[i]);
        }
    }

    sort(all(a));
    sort(all(b));

    string res = "";
    ll sa = 0;
    ll sb = 0;
    for(ll i=0;i<s.size();i++){
        if(i%2==0) res.push_back(a[sa++]);
        else res.push_back(b[sb++]);
    }

    return res;
}

void solve(){
    ll n,k; cin>>n>>k;
    string s; cin>>s;

    if(k%2==0){
        sort(all(s));
        cout<<s<<endl;
    }else{
        s = algo(s);
        s = algo(s);
        cout<<s<<endl;
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