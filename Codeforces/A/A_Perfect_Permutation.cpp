#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,i,maxa=0,maxb=0,p;
    cin>>t;
    while (t--)
    {
        cin>>i;
        for(int q=0;q<i;q++){
            cin>>p;
            if(p>maxa){
                maxa=p;
            }
        }
        for(int q=0;q<i;q++){
            cin>>q;
            if(p>maxb){
                maxb=p;
            }
        }
    }
}