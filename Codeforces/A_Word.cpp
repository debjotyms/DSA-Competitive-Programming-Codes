#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char s[101];
    int big=0, small=0,i=0;
    cin>>s;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            small++;
        }else{
            big++;
        }
    }
    if(small>=big){
        while(s[i]){
          char c=s[i];
          putchar(tolower(c));
          i++;
        }
    }else{
        while(s[i]){
          char c=s[i];
          putchar(toupper(c));
          i++;
        }
    }
 
    return 0;
}