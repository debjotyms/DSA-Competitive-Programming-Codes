#include<bits/stdc++.h>
using namespace std;

int minority_checl(string s){
    int zeros = 0, ones=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            zeros++;
        }else{
            ones++;
        }
    }

    if(zeros==ones){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int ans = 0;
        cin>>s;
        int len = s.length();
        
        if(len==1 ||len==2){
            cout<<0;
        }else{
            int r;
            while(r<=len){
                int r = 3;
                string news;
                for(int i=0;i<len;i++){
                    for(int j=i,po=1;po<=r;j++){
                        news[j]=s[j];
                    }
                    if(minority_checl(news)==1){
                        ans++;
                    }
                }
                r++;
            }
        }
        cout<<ans<<endl;
    }
    
}