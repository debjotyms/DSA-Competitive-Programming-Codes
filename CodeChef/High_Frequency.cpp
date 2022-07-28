#include <bits/stdc++.h>
using namespace std;
#define vin for(auto &x:v) cin>>x;
#define endl '\n'
typedef long long ll;
void solve(){
    int n; cin>>n;
    vector <int> A(n);
    vector <int> freq;
    for(auto &x:A) cin>>x;
    sort(A.begin(),A.end());

    int checker = A[0];
    int tempFreq = 0;
    for(int i=0;i<n;i++){ 
        if(checker==A[i]) tempFreq++;
        else{
            freq.push_back(tempFreq);
            tempFreq=1;
            checker = A[i];
        }
        if(i==n-1) freq.push_back(tempFreq);
    }
    
    sort(freq.begin(),freq.end());

    int ans = ceil(freq[freq.size()-1]/2.0);
    if(ans>freq[freq.size()-2]) cout<<ans<<endl;
    else cout<<freq[freq.size()-2]<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}