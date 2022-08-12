#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void hanoi(int n,int start,int end){
    if(n==1){
        cout<<start<<" -> "<<end<<endl;
    }else{
        int other = 6-(start+end);
        hanoi(n-1,start,other);
        cout<<start<<" -> "<<end<<endl;
        hanoi(n-1,other,end);
    }
}
void solve(){
    hanoi(3,1,3);
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}