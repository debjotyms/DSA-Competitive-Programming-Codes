#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int l=1,r=1;
    string s,a,b; cin>>s;
    for(int i=0;i<n;i++){
        a.push_back(s[i]);
    }
    for(int i=n;i<2*n;i++){
        b.push_back(s[i]);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // cout<<a<<endl<<b;  
    for(int i=0;i<n;i++){
        if((int)a[i]>=(int)b[i]){
            l=0;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if((int)a[i]<=(int)b[i]){
            r=0;
            break;
        }
    }
    if(l||r){
        cout<<"YES";
    }else{
        cout<<"NO";
    } 
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}