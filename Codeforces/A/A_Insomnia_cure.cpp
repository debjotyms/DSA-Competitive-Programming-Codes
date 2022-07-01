#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ans=0;
    int dragon[d+1];
    for(int i=0;i<=d;i++){
        dragon[i]=i+1;
    }
    for(int i=0;i<d;i++){
        if(dragon[i]%k==0){
            ans++;
        }else if(dragon[i]%l==0){
            ans++;
        }else if(dragon[i]%m==0){
            ans++;
        }else if(dragon[i]%n==0){
            ans++;
        }
    }
    cout<<ans;
 
}