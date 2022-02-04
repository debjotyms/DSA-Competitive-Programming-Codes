#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int ans=0,k=0;
    while(t--){
        int a,b; cin>>a>>b;
        k=k-a+b;
        if(k>ans) ans=k;
    }
    cout<<ans;
}