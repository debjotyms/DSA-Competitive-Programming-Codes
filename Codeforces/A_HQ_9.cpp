#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string a;
  cin>>a;
  int lenght = a.size();
  for(int i=0;i<lenght;i++){
    if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
      cout<<"YES";
      break;
    }
    if(i==lenght-1){
      cout<<"NO";
      break;
    }
  }
}