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
    ll a,b; cin>>a>>b;
    if(a%2==1 and b%2==1){
        cout<<"No"<<endl;
    }else if(a%2==1 and b%2==0){
        if(b/2==a) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }else if(a%2==0 and b%2==1){
        if(a/2==b) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }else{
        cout<<"Yes"<<endl;
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