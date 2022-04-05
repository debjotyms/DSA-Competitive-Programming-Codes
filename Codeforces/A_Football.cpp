#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,p=0,q=0;
  string a,l,m;
  cin>>n>>a;
  l=a;
  p++;
  n--;
  while(n--){
    cin>>a;
    if(a==l){
      p++;
    }else{
      m=a;
      q++;
    }
  }
 
  if(p>q){
    cout<<l;
  }else{
    cout<<m;
  }
}