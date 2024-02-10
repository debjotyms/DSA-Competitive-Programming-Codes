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

// bool is_prime(ll n){
//     for(ll i=2;i<sqrt(n)+1;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// bool is_sub(ll i, string s){
//     string a = to_string(i);

//     ll ai=0;

//     for(ll i=0;i<s.size();i++){
//         if(s[i]==a[ai]){
//             ai++;
//             if(ai==a.size()){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

void solve(){
    string s; cin>>s;
    // for(ll i=11;i<=987654321;i++){
    //     if(is_prime(i)){
    //         if(is_sub(i, s)){
    //             cout<<i<<endl;
    //             return;
    //         }
    //     }        
    // }
    // cout<<-1<<endl;
    
    ll a = find(all(s),'1')-s.begin();
    ll b = find(all(s),'3')-s.begin();

    if(a<b) cout<<13<<endl;
    else cout<<31<<endl;

    return;
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