#include<bits/stdc++.h>
using namespace std;
void func(int &b){
    b++;
}
int main(){
    int a;
    a = 100;
    func(a);
    cout<<a;
}