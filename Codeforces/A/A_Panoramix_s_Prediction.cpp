#include<bits/stdc++.h>
using namespace std;
 
int is_prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
 
int main(){
    int a,b;
    cin>>a>>b;
    if(is_prime(b)==0){
        cout<<"NO";
    }else{
        for(a=a+1;a<=b;a++){
            if(is_prime(a)==1 &&a!=b){
                cout<<"NO";
                break;
            }else if(a==b){
                cout<<"YES";
                break;
            }
        }
    }
 
    return 0;
}