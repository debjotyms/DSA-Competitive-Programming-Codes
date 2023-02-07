#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
map<char,int> mp;
string palinPrint(map<char,int> mp){
    string a="",b="",c="";
    for(auto x:mp){
        if(x.second%2==0){
            for(int i=0;i<x.second/2;i++){
                a+=x.first;
                c+=x.first;
            }
        }else{
            for(int i=0;i<x.second;i++){
                b+=x.first;
            }
        }
    }
    reverse(all(c));
    return (a+b+c);
}
void solve(){
    string s; cin>>s;
    for(auto x:s) mp[x]++;
    int e=0,o=0;
    for(auto x:mp){
        if(x.second%2==0) e++;
        else o++;
    }
    if(o==1||o==0) cout<<palinPrint(mp)<<endl;
    else cout<<"NO SOLUTION\n";
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