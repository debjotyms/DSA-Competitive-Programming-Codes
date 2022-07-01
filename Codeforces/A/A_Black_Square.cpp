#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    int e=0,f=0,g=0,h=0;
    string s; cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') e+=a;
        else if(s[i]=='2') f+=b;
        else if(s[i]=='3') g+=c;
        else if(s[i]=='4') h+=d;
    }
    cout<<e+f+g+h;
}