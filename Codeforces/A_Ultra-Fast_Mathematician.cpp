#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string sa,sb;
    cin>>sa>>sb;
    for(size_t i=0;i<sa.length();i++){
        if(sa[i]==sb[i])
            cout<<"0";
        else
            cout<<"1";
    }
 
}  