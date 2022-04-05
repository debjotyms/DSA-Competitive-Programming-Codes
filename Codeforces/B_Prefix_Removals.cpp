#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int count = 0;
        string s; cin>>s;
        int n = s.size();
        int trig = 0;
        for(int i=0;i<n-1;i++){
            int j,trig;
            for(j=i+1;j<n;j++){
                trig = 1;
                if(s[i]==s[j]){
                    count++;
                    trig = 0;
                    break;
                }
            }
            if(trig==1) break;
        }        
        for(int i = count;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}