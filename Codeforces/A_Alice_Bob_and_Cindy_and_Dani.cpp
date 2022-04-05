#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string a,b,c;
  cin>>a>>b>>c;
  if(a[0]!='D' && b[0]!='D' && c[0]!='D'){
    cout<<"Dani";
  }else if(a[0]!='B' && b[0]!='B' && c[0]!='B'){
    cout<<"Bob";
  }else if(a[0]!='C' && b[0]!='C' && c[0]!='C'){
    cout<<"Cindy";
  }else{
    cout<<"Alice";
  }
}