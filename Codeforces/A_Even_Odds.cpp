#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,k,p;
    cin>>n>>k;
    p=(n+1)/2;
 
    if(k<=p){
        cout<<(2*k)-1;
    }else{
        cout<<2*(k-((n+1)/2));
    }
 
}