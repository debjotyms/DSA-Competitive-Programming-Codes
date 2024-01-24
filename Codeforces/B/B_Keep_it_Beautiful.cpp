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
    ll n; cin>>n;
    vi v(n); vin;

    if(n==1){
        cout<<1<<endl;
        return;
    }

    ll flag = 1;
    ll last = v[0];

    cout<<1;

    for(ll i=1;i<n;i++){
        if(flag==0){
            if(last<=v[i] && v[i]<=v[0]){
                cout<<1;
                last = v[i];
            }else{
                cout<<0;
            }
        }else{
            if(last<=v[i]){
                cout<<1;
                last = v[i];
            }else if(v[0]>=v[i]){
                flag = 0;
                last = v[i];
                cout<<1;
            }
            else cout<<0;
        }
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