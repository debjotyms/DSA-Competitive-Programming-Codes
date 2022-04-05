#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a[101], b[101], c[101];
    int i,t,k=0,l=0,m=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(i=0;i<t;i++){
        k=k+a[i];
        l=l+b[i];
        m=m+c[i];
    }
 
    if(k==0 && l==0 && m==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}