#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
bool cmp(pair<int,int> p1, pair<int,int> p2){
    if(p1.first>p2.first){
        return true;
    }else if(p1.first==p2.first){
        if(p1.second<p2.second){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
void solve(){
    int n,x,y,z; cin>>n>>x>>y>>z;
    vector<pair<int,int>> math,english,total;
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        math.push_back({a,i});
    }
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        english.push_back({a,i});
    }
    for(int i=1;i<=n;i++){
        total.push_back({math[i-1].first+english[i-1].first,i});
    }
    sort(math.begin(),math.end(),cmp);
    sort(english.begin(),english.end(),cmp);
    sort(total.begin(),total.end(),cmp);
    set<int> ans;
    int tt=0;
    for(auto xx:math){
        if(tt==x) break;
        ans.insert(xx.second);
        tt++;
    }
    tt=0;
    for(auto xx:english){
        if(tt==y) break;
        auto it = ans.find(xx.second);
        if(it==ans.end()){
            ans.insert(xx.second);
            tt++;
        }
    }
    tt=0;
    for(auto xx:total){
        if(tt==z) break;
        auto it = ans.find(xx.second);
        if(it==ans.end()){
            ans.insert(xx.second);
            tt++;
        }
    }
    for(auto xx:ans){
        cout<<xx<<endl;
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