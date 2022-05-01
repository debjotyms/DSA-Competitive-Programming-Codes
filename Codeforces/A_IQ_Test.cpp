#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    string s;
    for(int i=0;i<9;i++){
        string a; cin>>a;
        s+=a;
    }
    for(int i=0;i<11;i++){
        if(i==3 || i==7) continue;
        string p; 
        p+=s[i];
        p+=s[i+1];
        p+=s[i+4];
        p+=s[i+5];
        int h=0;
        int d=0;
        for(auto c:p){
            if(c=='.') d++;
            else h++;
        }
        if(h>=3 || d>=3){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}