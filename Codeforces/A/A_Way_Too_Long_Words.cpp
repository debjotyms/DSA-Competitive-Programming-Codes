#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[101];
    int T;
    cin>>T;
    while(T--){
        cin>>a;
    int lenth = strlen(a);
    if(lenth<=10){
        cout<<a<<endl;
    }else{
        cout<<a[0]<<lenth-2<<a[lenth-1]<<endl;   
    }
    }
    
    return 0;
}