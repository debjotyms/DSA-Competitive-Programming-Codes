#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
int cnt;
int arr[100];
int fibo(int a){
    cnt++;
    if(arr[a]!=0){
        return arr[a];
    }
    if(a==1 || a==2){
        return 1;
    }
    arr[a] = fibo(a-1)+fibo(a-2);
    return arr[a];
}
void solve(){
    int a; cin>>a; 
    cout<<fibo(a);
    cout<<endl<<cnt;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}