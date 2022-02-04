#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0,c=0,d=0,z,ans=0; cin>>n;
    for(int i=0;i<n;i++){
        cin>>z;
        if(z==1) a++;     
        else if(z==2) b++;
        else if(z==3) c++;
        else if(z==4) d++;
    }
    ans+=d;
    if(a==0){
        ans+=c;
        if(b%2==0) ans+=(b/2);
        else ans+=((b/2)+1);
    }else{
        ans+=c;
        a-=c;
        if(a<0) a=0;
        if(b%2==0) ans+=(b/2);
        else{
            ans+=((b/2)+1);
            if(a==1 || a==2){
                a=0;
            }
        }
        if(a!=0){
            ans+=1;
            ans+=a/4;
        }
    }
    cout<<ans;
}