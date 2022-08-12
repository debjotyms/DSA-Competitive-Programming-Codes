#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
vi v{6,2,6,8,1,2,9,0};
vi v2(v.size());
void mergeSort(int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSort(low,mid);
    mergeSort(mid+1,high);
    int i,j,k;
    for(int i=low,j=mid+1,k=low;k<=high;k++){
        if(i==mid+1) v2[k]=v[j++];
        else if(j==high+1) v2[k]=v[i++];
        else if(v[i]<v[j]) v2[k]=v[i++];
        else v2[k]=v[j++];
    }
    for(k=low;k<=high;k++) v[k]=v2[k];
}
void solve(){
    mergeSort(0,7);
    vout v;
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