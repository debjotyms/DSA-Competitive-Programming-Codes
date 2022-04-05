#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int setSize = s.size();
    sort(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<setSize-1;i++){
        if('a'<=s[i] && s[i]<='z' && s[i]!=s[i+1]){
            ans++;
        }
    }
    cout<<ans;
}