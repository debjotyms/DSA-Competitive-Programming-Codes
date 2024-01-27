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
    ll x,n; cin>>x>>n;
    if(x%n==0) cout<<x/n<<endl;
    else{
        ll mini = x/n;
        while(mini!=0){
            ll temp = mini*(n-1)+(mini*2);
            if((x-temp)%mini==0){
                cout<<mini<<endl;
                break;
            }
            mini--;
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