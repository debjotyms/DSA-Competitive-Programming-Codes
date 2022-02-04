#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,k=0; cin>>t>>n;
    while(t--){
        cin>>m;
        if(m>n) k+=2;
        else k+=1;
    }
    cout<<k;
}