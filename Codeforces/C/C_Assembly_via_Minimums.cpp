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
    ll n; cin>>n;
    vi v((n*(n-1))/2); vin;
    sort(all(v));
    // for(auto x:v) cout<<x<<" "; cout<<endl;
    // return;

    ll temp = -1;

    for(ll i=n-1;i>0;i--){
        temp = temp+i;
        cout<<v[temp]<<" ";
    }

    cout<<v[v.size()-1]<<" "<<endl;

    // set<ll> st;

    // for(auto x:v) st.insert(x);
    // vi vv; for(auto x:st) vv.push_back(x);
    // // for(auto x:st) cout<<x<<" "; cout<<endl;

    // map<ll, ll> mp;
    // for(auto x:v){
    //     mp[x]+=1;
    // }

    // bool flag = false;
    // for(ll i=0;i<st.size();i++){
    //     ll times = mp[vv[i]];
    //     ll actual = n-1-i;
    //     cout<<vv[i]<<" ";
    //     if(times != actual and !flag){
    //         for(ll k=0;k<n-st.size()-1;k++) cout<<vv[i]<<" ";
    //         flag = true;
    //     }
    // }
    // cout<<vv[vv.size()-1]+1<<" ";
    // cout<<endl;
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