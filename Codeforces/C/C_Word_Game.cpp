#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int n; cin>>n;
    map<string,int> mp;
    int a=0,b=0,c=0;
    set<string> sa,sb;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        sa.insert(s);
        mp[s]=1;
        a+=3;
    }
    for(int i=0;i<n;i++){
        string s; cin>>s;
        sb.insert(s);
        if(mp[s]==0){
            b+=3;
            mp[s]+=1;
        }else{
            a-=2;
            b+=1;
            mp[s]+=1;
        }
    }
    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(mp[s]==0){
            c+=3;
        }else if(mp[s]==1){
            auto it = sa.find(s);
            if(it==sa.end()){
                b-=2;
                c+=1;
            }else{
                a-=2;
                c+=1;
            }
        }else{
            a-=1;
            b-=1;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
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