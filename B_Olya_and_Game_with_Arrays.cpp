#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

bool cmp(vector<ll> a, vector<ll> b){
    if(a[0]==b[0]) return a[1]<b[1];
    return a[0]<b[0];
}

void solve(){
    ll n; cin>>n;
    vector<vector<ll>> vv;
    for(ll i=0;i<n;i++){
        ll a; cin>>a;
        vi v;
        for(ll i=0;i<a;i++){
            ll b; cin>>b;
            v.push_back(b);
        }
        sort(all(v));
        vi temp;
        temp.push_back(v[0]);
        temp.push_back(v[1]);
        vv.push_back(temp);
    }

    if(vv.size()==1){
        cout<<*min_element(all(vv[0]))<<endl;
        return;
    }

    for(ll i=0;i<n;i++){
        sort(all(vv[i]));
    }

    sort(all(vv), cmp);

    ll sum = 0;
    ll fmin = LONG_LONG_MAX;
    ll smin = LONG_LONG_MAX;

    for(ll i=0;i<n;i++){
        sum+=vv[i][1];
        fmin = min(fmin, vv[i][0]);
        smin = min(smin, vv[i][1]);
    }

    cout<<sum-smin+fmin<<endl;
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