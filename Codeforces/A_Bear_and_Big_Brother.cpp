#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,years=0;
    cin>>a>>b;
    while(1){
        years++;
        a=a*3;
        b=b*2;
        if(a>b){
            cout<<years;
            break;
        }
    }
    return 0;
}
