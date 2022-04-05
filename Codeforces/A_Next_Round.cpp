#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,scores[51],i=0,ans=0;
    cin>>n>>k;
    int l = n;
    while(l--){
        cin>>scores[i];
        i++;
    }
    i=0;
    while(n--){
        if(scores[i]>=scores[k-1] && scores[i]!=0){
            ans++;
            i++;
        }
    }
    cout<<ans;
    return 0;
}
