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
    vi v(n); vin;

    vi diff;
    for(ll i=1;i<=n;i++) diff.push_back(abs(i-v[i-1]));

    ll res = diff[0];

    for(ll i=1;i<n;i++) res = __gcd(res, diff[i]);

    cout<<res<<endl;

    // ll res = n;

    // for(ll i=1;i<=n;i++){
    //     ll diff = abs(i-v[i-1]);
    //     if((res%diff==0)) res = max(res, diff);
    //     else res = diff;
    // }

    // cout<<res<<endl;

    // sort(all(dif));
    // ll start = 0;
    // while(dif[start]==0) start++;

    // ll res = 0;
    // ll ans = 1;
    // vi a;
    // ll mxCount = 0;

    // for(ll i=1;i<=n;i++){
    //     ll k = count(all(dif),i);
    //     mxCount = max(mxCount, k);

        // if(k>=res){
        //     res = k;
        //     ans = i;
        //     a.push_back(i);
        // }
    // }

    // for(ll i=1;i<=n;i++){
    //     ll k = count(all(dif),i);
    //     if(k==mxCount) a.push_back(i);
    // }

    // vout(dif); cout<<endl;
    // sort(all(a));
    // cout<<a[0]<<endl;
    // cout<<ans<<endl;


    // cout<<start<<endl;

    // ll res = 1;
    // ll cnt = 1;
    // ll ans = 1;

    // for(ll i=start;i<n;i++){
    //     if(dif[i]!=dif[i+1]){
    //         if(cnt>res){
    //             res = cnt;
    //             ans = dif[i];
    //         }
    //         cnt = 0;
    //     }
    //     cnt++;
    // }

    // cout<<res<<endl;
    // cout<<ans<<endl;
    // cout<<"------------"<<endl;
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