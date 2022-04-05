#include <bits/stdc++.h>
using namespace std;
 
int main(){
    double l,w,a,k1,k2; 
    long long int ans=1;
    cin>>l>>w>>a;
    if(l>a && w>a){
        k1 = l/a;
        k1 = ceil(k1);
        k2 = w/a;
        k2 = ceil(k2);
        ans = ans + k1*k2-1;
        cout<<ans;
    }else if(w>a){
        k2 = w/a;
        k2 = ceil(k2);
        ans = ans + k2 -1;
        cout<<ans;
    }else if(l>a){
        k1 = l/a;
        k1 = ceil(k1);
        ans = ans + k1 -1;
        cout<<ans;
    }else{
        cout<<ans;
    }
}