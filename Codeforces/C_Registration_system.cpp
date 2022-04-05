#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    map <string,int> mp;
    while(n--){
        string s; cin>>s;
        if(mp[s]==0) cout<<"OK"<<"\n";
        else cout<<s<<mp[s]<<"\n";
        mp[s]++;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}