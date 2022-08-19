#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,ch; cin>>S;
    int a,b; cin>>a>>b;
    ch[0]=S[a-1];
    S[a-1]=S[b-1];
    S[b-1]=ch[0];
    cout<<S;
}