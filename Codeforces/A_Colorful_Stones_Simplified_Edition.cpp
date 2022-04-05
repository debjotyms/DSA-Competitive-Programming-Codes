#include<bits/stdc++.h>
#define NL endl
#define LL long long
#define PB push_back
#define VI vector <int>
#define SQR(A) ((A)*(A))
#define MAXII(A,B) max(A,B)
#define MINII(A,B) min(A,B)
#define DRI(A) int (A); cin>>A
#define read(type) readInt<type>()
#define DRII(A,B) int A,B; cin>>A>>B
#define MAXIII(A,B,C) max(A,max(B,C))
#define MINIII(A,B,C) min(A,min(B,C))
#define FL(A,B,C) for(int A=B;A<C;A++)
#define DRIII(A,B,C) int A,B,C; cin>>A>>B>>C
#define DRIIII(A,B,C,D) int A,B,C,D; cin>>A>>B>>C>>D
using namespace std;
void solve(){
    string s,t; cin>>s>>t;
    int i,j;
    for(i=0,j=0;j<t.size();j++){
        if(s[i]==t[j]) i++;
    }
    i++;
    if(i>s.size()) i--;
    cout<<i;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}