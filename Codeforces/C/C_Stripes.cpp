#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(6);
#define done cout<<"Successful\n";
#define input(gggg,n) for(int xd=0;xd<n;xd++)cin>>gggg[xd];
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

void solve(){
    int n = 8;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        int r=0;
        for(int j=0; j<n; j++){
            if(v[i][j]=='R')r++;
        }
        if(r==8){
            cout<<"R"<<nl;
            return;
        }
    }
    cout<<"B\n";
}
int main(){
    fast;

    #ifdef DEBUG
    #endif // DEBUG

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}