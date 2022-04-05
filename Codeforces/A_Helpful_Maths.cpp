#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string math_in;
  cin>>math_in;
  int a=0,b=0,c=0,lenght=math_in.size();
 
  for(int i=0;i<lenght;i++){
    if(math_in[i]=='1'){
      a++;
    }else if(math_in[i]=='2'){
      b++;
    }else if(math_in[i]=='3'){
      c++;
    }
  }
 
  int i =0;
 
    while(a--){
      cout<<"1";
      i++;
      if(i<lenght){
        cout<<"+";
        i++;
      }
    }
    while(b--){
      cout<<"2";
      i++;
      if(i<lenght){
        cout<<"+";
        i++;
      }
    }
    while(c--){
      cout<<"3";
      i++;
      if(i<lenght){
        cout<<"+";
        i++;
      }
    }
}