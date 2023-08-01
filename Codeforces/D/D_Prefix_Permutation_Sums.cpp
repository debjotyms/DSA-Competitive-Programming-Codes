#include <bits/stdc++.h>
using namespace std;
#define vi vector <long long>
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    ll n; cin>>n;
    vi v(n-1); vin;
    ll lst = (n*(n+1LL))/2LL;

    if(v[n-2]>lst){
        cout<<"NO"<<endl;
        return;
    }else if(v[n-2]<lst){
        v.push_back(lst);
        vi diff;
        for(ll i=1;i<n;i++){
            diff.push_back(v[i]-v[i-1]);
        }
        diff.push_back(v[0]);
        sort(all(diff));
        for(ll i=0;i<n;i++){
            if(diff[i]!=i+1){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;;
    }else{
        vi diff;
        vi norm;
        for(ll i=1;i<=n;i++) norm.push_back(i);
        for(ll i=1;i<n-1;i++){
            diff.push_back(v[i]-v[i-1]);
        }
        diff.push_back(v[0]);
        for(ll i=0;i<n-1;i++){
            if(norm[diff[i]-1]!=-1 and diff[i]<=n){
                norm[diff[i]-1] = -1;
                diff[i] = -1;
            }
        }

        ll temp = 0;
        for(ll i=0;i<n;i++){
            if(norm[i]==-1) temp++;
        }
        if(temp!=n-2){
            cout<<"NO"<<endl;
            return;
        }

        ll sum1=0, sum2=0;

        for(auto x:diff) if(x!=-1) sum1+=x;
        for(auto x:norm) if(x!=-1) sum2+=x;

        if(sum1==sum2) cout<<"YES\n";
        else cout<<"NO\n";
    }
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