#include<bits/stdc++.h>
using namespace std;
using sss = string;
int main(){
    sss s; cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.size();i++)
        if(s[i]>='a' && s[i]<='z') a++;
        else b++;
    if(s[0]>='A' && s[0]<='Z'){
        if(b==s.size()){
            for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
        }
    }else if(s[0]>='a' && s[0]<='z'){
        if(b==s.size()-1){
            for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
            s[0]=toupper(s[0]);
        }
    }
    cout<<s;
}