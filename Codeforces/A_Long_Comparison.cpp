#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long x1,p1; cin>>x1>>p1;
        long long x2,p2; cin>>x2>>p2;
        long long m=min(p1,p2);
        p1-=m; p2-=m;
        if(p1>6) cout<<">"<<endl;
        else if(p2>6) cout<<"<"<<endl;
        else{
            long long a1=x1*pow(10,p1);
            long long a2=x2*pow(10,p2);
            if(a1==a2) cout<<"="<<endl;
            if(a1>a2) cout<<">"<<endl;
            if(a1<a2) cout<<"<"<<endl;
        }
    }
}