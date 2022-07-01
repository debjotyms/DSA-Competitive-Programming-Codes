#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k; cin>>t;
    while(t--){
        int ans=1;
        cin>>n>>k;
        string s,rs,s1,s2; cin>>s;
            for(int i=0;i<k;i++){
                rs=s;
                reverse(rs.begin(),rs.end());
                s1 = s+rs;
                s2 = rs+s;
                if(s1!=s2) ans++;
                else break;
                s=s1;
            }
        cout<<ans<<endl;
    }
}