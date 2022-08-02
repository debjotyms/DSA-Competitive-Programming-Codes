#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
bool isPrime(int num){
    for(int i=2;i<sqrt(num+1);i++){
        if(num%i==0) return false;
    }
    return true;
}
void solve(){
    int t; cin>>t;
    vector <int> prime;
    int j=0;
    for(int i=2;j<=15000;i++){
        if(isPrime(i)){
            j++;
            prime.push_back(i);
        }
    }
    while(t--){
        int k; cin>>k;
        cout<<prime[k-1]<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}