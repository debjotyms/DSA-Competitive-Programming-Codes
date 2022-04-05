#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,n,num_1,num_2;
    string a,b,c;
    cin>>t;
    while (t--)
    {
        int c_count_1 = 0;
        int c_count_2 = 0;
        cin>>n;
 
        if(n%7==0){
            cout<<n<<endl;
            continue;
        }else{
            int k = n%7;
            num_1 = n - k;
            num_2 = n + 7 - k;
        }
        a = to_string(num_1);
        b = to_string(num_2);
        c = to_string(n);
        for(int z = 0;z<a.length();z++){
            if(c[z]==a[z]){
                c_count_1++;
            }
            if(c[z]==b[z]){
                c_count_2++;
            }
        }
        if(c_count_2>c_count_1){
            cout<<b<<endl;
        }else{
            cout<<a<<endl;
        }
    }
    
}