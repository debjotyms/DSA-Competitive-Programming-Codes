#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,x=0;
    string c;
    cin>>n;
    while(n--){
        cin>>c;
        for(i=0;i<3;i++){
            if(c[i]=='+'){
                x++;
                break;
            }else if(c[i]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;
    return 0;
}
