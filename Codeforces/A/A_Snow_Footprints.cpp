#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int start, end;
    for(int i=0;i<n;i++){
        if(s[i]=='.' && s[i+1]=='R'){
            start = i+1+1;
        }else if(s[i]=='.' && s[i+1]=='L'){
            start = i+1+1;
            end = i+1;
            break;
        }
        if(s[i]=='R' && s[i+1]=='.'){
            end = i+1+1;
        }else if(s[i]=='R' && s[i+1]=='L'){
            end = i+1;
        }
    }
    cout<<start<<" "<<end;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}