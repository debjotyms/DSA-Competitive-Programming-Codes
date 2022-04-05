Copy
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char s[201];
    int i;
    cin>>s;
 
    for(i=0;i<strlen(s);i++){
        if(s[i]=='.'){
            cout<<"0";
        }else if(s[i]=='-' && s[i+1] =='.'){
            cout<<"1";
            i++;
        }else{
            cout<<"2";
            i++;
        }
    }
 
}