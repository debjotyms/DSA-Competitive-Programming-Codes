#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[51];
    int i,n,ans=0;
    cin>>n>>s;
    for(i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
