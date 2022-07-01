#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,ans=0;
  cin>>n;
  int a[n+1], b[n+1];
 
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
 
  sort(a,a+n);
  
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
 
  sort(b,b+n);
  
  for(int i=0;i<n;i++){
    if(a[i]>b[i]){
      ans++;
    }
  }
  if(ans==0){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}