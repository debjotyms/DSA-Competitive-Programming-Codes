#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    vector <int> v{9,8,7,6,5,4,3,2,1};
    int digiSum = 0;
    vector <int> v1;
    for(int i=0;i<10;i++){
        if(digiSum+v[i]>n){
            continue;
        }
        else{
            digiSum+=v[i];
            v1.push_back(v[i]);
        }
        if(digiSum==n){
            break;
        }
    }
    sort(v1.begin(),v1.end());
    for(auto x:v1) cout<<x;
    cout<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}