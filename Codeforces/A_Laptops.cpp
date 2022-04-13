#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
int solve(){
    vector <pair<int,int>> laptop;
    int t; cin>>t;
    int n = t;
    while(t--){
        int a,b; cin>>a>>b;
        laptop.push_back(make_pair(a,b));
    }
    sort(laptop.begin(),laptop.end());
    for(int i=0;i<n-1;i++){
        if(laptop[i].first<laptop[i+1].first && laptop[i].second>laptop[i+1].second){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}