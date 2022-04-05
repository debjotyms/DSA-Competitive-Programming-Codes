#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int c;
    cin>>c;
    int a=0;
    while(c!=0){
        if(c%10==4 || c%10==7){
            a++;
        }
        c=c/10;
    }
 
    if(a==4 ||a==7)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;
}