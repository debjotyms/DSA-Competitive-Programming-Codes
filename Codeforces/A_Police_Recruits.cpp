#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b,ans=0; cin>>n;
    while(n--){
        cin>>b;
        if(b==-1){
            if(a==0){
                ans++;
            }else{
                a--;
            }
        }else{
            a+=b;
        }
    }
    cout<<ans;
}