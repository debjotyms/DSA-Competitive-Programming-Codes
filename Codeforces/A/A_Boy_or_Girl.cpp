#include<bits/stdc++.h>
using namespace std;
int main(){
    string username; cin>>username;
    int distinct_char_count=1;
    sort(username.begin(),username.end());
    for(int i=1;i<username.size();i++){
        if(username[i]!=username[i-1]) distinct_char_count++;
    }
    if(distinct_char_count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}