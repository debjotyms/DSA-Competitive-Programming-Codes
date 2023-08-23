#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

ll area(ll x, vi v, ll c){
    ll res = 0;
    for(ll i=0;i<v.size();i++){
        res = res + ((v[i]+(2*x))*(v[i]+(2*x)));
        if(res>c){
            return c+1;
        }
    }
    return res;
}

void solve(){
    ll n, c;  cin>>n>>c;
    vi v(n); vin;

    ll left = 0, right = 1000000000;
    while(left<=right){
        ll mid = left + (right-left)/2;
        if(area(mid, v, c) == c){
            cout<<mid<<endl;
            return;
        }else if(area(mid, v, c)<c){
            left = mid+1;
        }else{
            right = mid-1;
        }
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