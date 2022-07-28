#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
bool cmp(pair<int,int> x,pair<int,int> y){
    if(x.first-x.second==y.first-y.second){
        if(x.first>y.first) return false;
        else return true;
    }else{
        return x.first-x.second > y.first-y.second;
    }
}
void solve(){
    int n; cin>>n;
    vector <pair <int,int>> vp;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end(),cmp);
    vector <int> checker;
    for(int i=0;i<n;i++){
        for(int j=vp[i].first;j<=vp[i].second;j++){
            auto it = find(checker.begin(),checker.end(),j);
            if(it==checker.end()){
                checker.push_back(j);
                cout<<vp[i].first<<" "<<vp[i].second<<" "<<j<<endl;
                break;
            }
        }
    }
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