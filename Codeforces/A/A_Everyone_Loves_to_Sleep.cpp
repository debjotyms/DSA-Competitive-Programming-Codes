#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;

pair<int,int> diff(int h,int m,int a,int b){
    int th,tm;
    if(m>b){
        tm = 60-m+b;
        h++;
    }else{
        tm = b-m;
    }
    if(h>a){
        th = 24-h+a;
    }else{
        th = a-h;
    }
    return {th,tm};
}

void solve(){
    int n,h,m; cin>>n>>h>>m;
    vector <pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        vp.push_back(diff(h,m,a,b));
    }
    sort(vp.begin(),vp.end());
    cout<<vp[0].first<<" "<<vp[0].second<<endl;
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