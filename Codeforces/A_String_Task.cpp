#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[101];
    int i,j=0;
    cin>>s;

    for(i=0;i<strlen(s);i++){
        s[i]=tolower(s[i]);
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
            cout<<"."<<s[i];
        }
    }
    return 0;
}
