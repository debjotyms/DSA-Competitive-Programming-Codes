#include<bits/stdc++.h>
#define dri(x) int (x); cin>>x
#define drii(x,y) int x,y; cin>>x>>y
#define driii(x,y,z) int x,y,z; cin>>x>>y>>z
using namespace std;
int main(){
    string s,t; cin>>s>>t;
    int i,j,ans=0;
    for(i=0,j=0;i<s.size(),j<t.size();j++){
        if(s[i]==t[j]) i++;
    }
    if(s.size()==t.size()) i--;
    cout<<i+1;
}