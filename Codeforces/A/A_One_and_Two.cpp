#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve(){
    ll n;
    int a[10000];
    cin>>n;
	for(int i=1; i<=n; i++) {
	    cin>>a[i];
		a[i]=a[i-1]+(a[i]==2);
	}
	int sol=-1;
	for (int k=1; k<=n-1; k++) {
		if (a[k]==a[n]-a[k]){
			sol=k;
			break;
		}
	}
	cout<<sol<<"\n";
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