#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,a; cin>>t;
    while(t--){
        cin>>a;
        int a1[a+1],a2[a+2];
        for(int i=0;i<a;i++) cin>>a1[i];
        for(int i=0;i<a;i++) cin>>a2[i];
        for(int i=0;i<a;i++){
            if(a1[i]<a2[i]){
                int temp=a1[i];
                a1[i]=a2[i];
                a2[i]=temp;
            }
        }
        sort(a1,a1+a);
        sort(a2,a2+a);
        cout<<a1[a-1]*a2[a-1]<<endl;
    }
}