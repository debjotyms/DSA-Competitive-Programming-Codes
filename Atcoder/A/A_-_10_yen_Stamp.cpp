#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,i;
    cin>>x>>y;
    int ans=0;
    for(i=x;i<y;i+=10) ans++;
    if(x<y && i<y) ans++;
    cout<<ans;
}