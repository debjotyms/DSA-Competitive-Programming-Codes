#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    string s; cin>>s;
    int mx=1, c=1;
    FL(i,0,s.size()-1,1){
        if(s[i]==s[i+1]) c++;
        else{
            mx=max(mx,c);
            c=1;
        }
    }
    mx=max(mx,c);
    cout<<mx;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}