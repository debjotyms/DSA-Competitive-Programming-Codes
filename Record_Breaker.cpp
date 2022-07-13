#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:visitor) cin>>x;
#define endl '\n'
typedef long long ll;
int tt=0;
void solve(){
    int n; cin>>n;
    vector <int> visitor(n); vin visitor;
    int rB=0;
    int tempMax = -1;
    int totalMax = -1;
    for(int i=0;i<n-1;i++){
        if(visitor[i]>tempMax && visitor[i+1]<visitor[i]){
            rB++;
            tempMax = visitor[i];
        }
        if(visitor[i]>totalMax) totalMax = visitor[i];
    }
    if(visitor[n-1]>totalMax) rB++;
    tt++;
    cout<<"Case #"<<tt<<": "<<rB<<endl;
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