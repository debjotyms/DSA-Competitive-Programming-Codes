#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c=1,ans=0;
    cin>>a>>b;
    while(c<b){
        c+=a-1;
        ans++;
    }
    cout<<ans;
}