#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a=1,b=1;
        int ans = 0;
        int cnt = 0;
        while(a!=n && b!=m){
            if(n==m){
                ans = 2*(n-1);
                break;
            }else if(n<m){
                if(b<m && cnt != 1){
                    ans++;
                    b++;
                    cnt = 1;
                }else if(a<n && cnt != 2){
                    ans++;
                    a++;
                    cnt = 2;
                }else if(a>1 && cnt != 3){
                    ans++;
                    a--;
                    cnt = 3;
                }
            }else{

            }
        }
        cout<<ans<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}