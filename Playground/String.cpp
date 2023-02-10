#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "Cat";
    string b = "Dog";
    string c = a+" and "+b+".";
    string c;
    getline(cin,c);
    cout<<c<<endl;
    c.pop_back();
    c.erase(c.begin());
    for(int i=0;i<c.size();i++){
        c[i]=c[i]+1;
    }
    cout<<c<<endl;
}