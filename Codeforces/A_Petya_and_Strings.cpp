#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[101], s2[101];
    cin>>s1>>s2;
    int i,lenth = strlen(s1);
    for(i=0;i<lenth;i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    for(i=0;i<lenth;i++){
        if(s1[i]<s2[i]){
            cout<<"-1";
            break;
        }
        if(s1[i]>s2[i]){
            cout<<"1";
            break;
        }
        if(i==lenth-1){
            cout<<"0";
            break;
        }

    }
    return 0;
}
