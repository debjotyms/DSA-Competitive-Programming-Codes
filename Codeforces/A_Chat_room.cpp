#include<bits/stdc++.h>
using namespace std;
int main(){
    string hello="hello";
    string chat; cin>>chat;
    int k,i;
    for(i=0,k=0;i<chat.size();i++){
        if(chat[i]==hello[k]) k++;
    }
    if(k==5) cout<<"YES";
    else cout<<"NO";
}