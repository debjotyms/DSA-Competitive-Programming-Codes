#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int position = 1, rotate,n_position,ans=0;
    for(int i=0;i<s.size();i++){
        n_position = s[i]-'a'+1;
        rotate = abs(position-n_position);
        position = n_position;
        if(rotate>13) rotate = 26 - rotate;
        ans+=rotate;
    }
    cout<<ans;
}