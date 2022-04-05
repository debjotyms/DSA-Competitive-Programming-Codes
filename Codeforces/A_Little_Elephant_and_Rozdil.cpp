#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,min=1000000000,ans=0;
  cin>>n;
  int a[n+1];
 
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=min){
      min=a[i];
      ans=i;
    }
  }
  sort(a,a+n);
  if(a[0]==a[1]){
    cout<<"Still Rozdil";
  }else{
    cout<<ans+1;
  }
}