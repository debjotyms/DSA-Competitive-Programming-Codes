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
    string s; cin>>s;
    vector<ll> v(6);
    for(ll i=0;i<6;i++) v[i]=s[i]-'0';
    ll first_sum = v[0]+v[1]+v[2];
    ll second_sum = v[3]+v[4]+v[5];
    if(first_sum-second_sum==1){
        if(v[5]==9) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }else if(second_sum-first_sum==1){
        if(v[5]==0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}