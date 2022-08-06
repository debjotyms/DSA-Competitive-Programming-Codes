#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;
void solve(){
    int a,b;
    while(cin>>a>>b){
        int i=a,j=b;
        int x,count=1,max=0;
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        while(a<=b){
            x=a;
            while(x!=1){
                if(x%2==0)x=x/2;
                else x=(3*x)+1;
                count++;
                if(x==1)break;
            }
            if(count>max) max=count;
            count=1;
            a++;
        }
        cout<<i<<" "<<j<<" "<<max<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}