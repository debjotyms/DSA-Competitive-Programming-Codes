#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
int tt = 1;
void solve(){
    int n; cin>>n;
    vector <int> v(n); vin v;
    vector <int> diff;
    for(int i=0;i<n-1;i++){
        diff.push_back((v[i]-v[i+1]));
    }
    int same = 0;
    int flag = diff[0];
    int tempSame = 0;
    for(auto x:diff){
        if(x==flag){
            tempSame++;
        }else{
            flag = x;
            tempSame = 1;
        }
        if(tempSame>same) same = tempSame;
    }
    cout<<"Case #"<<tt<<": "<<same+1<<endl;
    tt++;
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