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
        string a; cin>>a;
        int flag = 1;
        for(int i=0;i<a.size();i++){
            int cnt = 0;
            int j;
            for(j=i;a[j]!=a[i];j++){
                cnt++;
            }
            cout<<cnt<<endl;
            if(cnt%2==0 || cnt%3==0) flag = 1;
            else{
                flag = 0;
                break;
            }
            i = j;
        }
        if(flag == 1) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}