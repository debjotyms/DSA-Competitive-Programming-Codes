#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t,n,k,l;
  cin>>t;
  while(t--){
    cin>>n>>k;
    if(n%2==0){
      l=n/2;
    }else{
      l=n/2;
      l++;
    }
    int p=1,q=1,h=1;
    if(k<=l){
      for(p=1;p<=n;p++){
        for(q=1;q<=n;q++){
          if(p==q && p%2==1 && h<=k){
            cout<<"R";
            h++;
          }else{
            cout<<".";
          }
          if(q==n){
            cout<<"\n";
          }
        }
      }
    }else{
      cout<<"-1\n";
    }
  }
}