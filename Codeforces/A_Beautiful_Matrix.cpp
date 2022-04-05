#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5],b,c;
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                b=abs(i-2);
                c=abs(j-2);
            }
        }
    }
    cout<<b+c;
    return 0;
}
