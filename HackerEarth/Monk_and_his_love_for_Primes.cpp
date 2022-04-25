#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
int isPrime(int n){
    if(n==1 || n==0) return 0;
    else if (n==2) return 1;
    else {
        for(int i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
void solve(){
    string s; cin>>s;
    int l=0;
    int u=0;
    int n = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]<='z' && s[i]>='a'){
            s[i]=s[i]-32;
        }
        else{
            s[i]=s[i]+32;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]<='z' && s[i]>='a'){
            n-=s[i];
        }
        else{
            n+=s[i];
        }
    }
    n = abs(n);
    cout<<isPrime(n);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}