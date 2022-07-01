#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n],s[2],l=1,r=n,m=0;
    s[0]=0;
    s[1]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    while(l<=r){
        if(a[l]>a[r]){
            s[m]+=a[l];
            l++;
        }else{
            s[m]+=a[r];
            r--;
        }
        m=1-m;
    }
    cout<<s[0]<<" "<<s[1];
}