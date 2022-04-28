#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    pair <int,string> arr[3];
    arr[0] = {4,"Gourab"};
    arr[1] = {1,"Swapan"};
    arr[2] = {2,"Basunti"};
    swap(arr[0],arr[2]);
    cout<<arr[0].first<<" "<<arr[0].second;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}