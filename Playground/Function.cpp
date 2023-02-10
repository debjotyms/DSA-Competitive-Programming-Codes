#include<bits/stdc++.h>
using namespace std;
string erase_first_last(string s){
    s.erase(s.begin());
    s.pop_back();
    return s;
}

void erase_first_last2(string &s){
    s.erase(s.begin()+0);
    s.pop_back();
}

int main(){
    string s;
    getline(cin,s);
    erase_first_last2(s);
    cout<<s;
}