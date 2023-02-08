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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    map<char,int> mp;
    for(auto x:s) mp[x]++;
    // for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
    vector<char> vc;
    int sizeVc = vc.size();
    for(auto x:mp) vc.push_back(x.first);
    // for(auto x:vc) cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<k;i++){
        vector<char> tans;
        for(int j=0;j<(n/k);j++){
            int temp;
            if(vc.size() != sizeVc) temp = j - (sizeVc - vc.size());
            else temp = j;
            mp[vc[temp]]--;
            tans.push_back(vc[temp]);
            if(mp[vc[temp]]==0){
                vc.erase(vc.begin()+temp);
            }

        }
        for(auto x:tans) cout<<x<<" ";
        cout<<endl;
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