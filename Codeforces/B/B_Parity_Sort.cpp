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
    int n; cin>>n;
    vi v(n); vin;
    vi v2(n);
    vi v3(n);

    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            v2[i] = 0;
        }else{
            v2[i] = 1;
        }
    }

    sort(v.begin(), v.end());

    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            v3[i] = 0;
        }else{
            v3[i] = 1;
        }
    }

    for(int i=0;i<n;i++){
        if(v2[i]!=v3[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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