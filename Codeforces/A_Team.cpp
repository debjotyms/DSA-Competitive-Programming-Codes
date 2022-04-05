#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,sum,coun=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        sum = a+b+c;
        if(sum>=2){
            coun++;
        }
    }
    cout<<coun;
    return 0;
}
