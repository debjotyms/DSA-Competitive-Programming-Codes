#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int s,n; cin>>s>>n;
    int j=n;
    vector<pair<int,int>>vp;
    while(n--){
        int a,b; cin>>a>>b;
        vp.PB(MP(a,b));
    }
    sort(vp.begin(),vp.end());
    int c=0;
    for(pair <int,int> i:vp){
        if(s<=i.first){
            cout<<"NO";
            break;
        }
        s+=i.second;
        c++;
    }
    if(c==j){
        cout<<"YES";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}