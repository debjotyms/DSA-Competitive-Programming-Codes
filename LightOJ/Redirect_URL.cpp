#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i=0;
    char s[101],m[101];
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>s;
        if(s[4]=='s'){
            cout<<"Case "<<i<<": "<<s<<endl;
        }else{
            int p,q=4,lenth=strlen(s);
            for(p=0;p<lenth;p++,q++){
                m[p]=s[q];
            }
            cout<<"Case "<<i<<": https"<<m<<endl;
        }
    }
    return 0;
}