#include <bits/stdc++.h>
#define LL long long
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        VI v(n); VIN v;
        VI v2;
        if((n&1)==1){
            cout<<"NO\n";
        }else{
            sort(v.begin(),v.end());
            for(int i=0,j=(n/2);i<(n/2);i++,j++){
                v2.push_back(v[i]);
                v2.push_back(v[j]);
            }
            int flag=0;
            for(int i=1;i<n-1;i++){
                if(((v2[i-1]<v2[i])&&(v2[i]>v2[i+1])) || ((v2[i-1]>v2[i])&&(v2[i]<v2[i+1]))){
                    flag=1;
                }else{
                    flag=0;
                    break;
                }
            }
            if(((v2[n-1]<v2[0])&&(v2[0]>v2[1])) || ((v2[n-1]>v2[0])&&(v2[0]<v2[1]))){
                flag=1;
            }else{
                flag=0;
            }
            if(((v2[n-2]<v2[n-1])&&(v2[n-1]>v2[0])) || ((v2[n-2]>v2[n-1])&&(v2[n-1]<v2[0]))){
                flag=1;
            }else{
                flag=0;
            }
            if(flag==0){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
                for(int i:v2){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}