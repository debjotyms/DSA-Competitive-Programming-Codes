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
    ll n,a,q; cin>>n>>a>>q;
    ll temp = a;
    string s; cin>>s;
    for(auto x:s){
        if(temp==n){
            cout<<"YES"<<endl;
            return;
        }
        if (x=='-'){
            temp-=1;
        }else{
            temp+=1;
        }

    }
    if(temp==n){
            cout<<"YES"<<endl;
            return;
    }else if(count(all(s),'+')>=(n-a)) cout<<"MAYBE"<<endl;
    else{
        cout<<"NO"<<endl;
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