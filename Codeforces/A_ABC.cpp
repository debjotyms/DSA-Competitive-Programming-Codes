#include<bits/stdc++.h>
using namespace std;
int minority_check(string s){
    int zeros = 0, ones=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='0') zeros++;
        else ones++;
    if(zeros==ones) return 0;
    else return 1;
}
int main(){
    string s;
    cin>>s;
    cout<<minority_check(s);
}