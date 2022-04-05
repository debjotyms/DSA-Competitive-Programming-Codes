#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,i,t=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        t=t+(i*k);
    }
    if(t-n<0){
        cout<<"0";
    }else{
        cout<<t-n;
    }
    return 0;
}
