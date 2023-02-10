#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;

    //Dynamic allocation
    int *d = new int;
    *d = 20; // 20 is assigned to the heap memory that d in pointing to
    cout<<d<<endl;
    cout<<*d<<endl;

    //Allocate array
    int *arr = new int[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<arr[1]<<endl;
    
    //Release the allocated memory
    delete d;
    delete[] arr;
}