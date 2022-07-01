#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    cin>>n>>t;
    char s[n],k[2];
    cin>>s;
 
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                k[0]=s[j];
                s[j]=s[j+1];
                s[j+1]=k[0];
                ++j;
            }
        }
    }
    cout<<s;
}