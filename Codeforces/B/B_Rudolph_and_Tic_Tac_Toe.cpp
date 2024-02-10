#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    char arr[3][3];
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

         if(arr[0][0]==arr[0][1] and arr[0][0]==arr[0][2] and arr[0][0]!='.') cout<<arr[0][0]<<endl;
    else if(arr[1][0]==arr[1][1] and arr[1][0]==arr[1][2] and arr[1][0]!='.') cout<<arr[1][0]<<endl;
    else if(arr[2][0]==arr[2][1] and arr[2][0]==arr[2][2] and arr[2][0]!='.') cout<<arr[2][0]<<endl;
    else if(arr[0][0]==arr[1][0] and arr[0][0]==arr[2][0] and arr[0][0]!='.') cout<<arr[0][0]<<endl;
    else if(arr[0][1]==arr[1][1] and arr[0][1]==arr[2][1] and arr[0][1]!='.') cout<<arr[0][1]<<endl;
    else if(arr[0][2]==arr[1][2] and arr[0][2]==arr[2][2] and arr[0][2]!='.') cout<<arr[0][2]<<endl;
    else if(arr[0][0]==arr[1][1] and arr[0][0]==arr[2][2] and arr[0][0]!='.') cout<<arr[0][0]<<endl;
    else if(arr[0][2]==arr[1][1] and arr[0][2]==arr[2][0] and arr[0][2]!='.') cout<<arr[0][2]<<endl;
    else cout<<"DRAW"<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}