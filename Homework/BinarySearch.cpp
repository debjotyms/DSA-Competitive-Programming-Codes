#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
int BinarySearch(VI v,int n,int x){
    int left = 0, right = n-1,mid;
    while(left<=right){
        mid = (left+right)/2;
        if(v[mid]==x){
            return mid;
        }else if(v[mid]<x){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}
void solve(){
    VI v{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout<<BinarySearch(v,20,13); //12
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}