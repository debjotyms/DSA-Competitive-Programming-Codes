#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,m,x,y;
    string s,k;
    cin>>l>>m>>s;
    for(x=l-1,y=m-1;x<y;x++,y--){
        k[0]=s[x];
        s[x]=s[y];
        s[y]=k[0];
    }
    cout<<s;
}