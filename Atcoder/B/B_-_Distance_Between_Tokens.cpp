#include <bits/stdc++.h>
using namespace std;
#define Author 🅳🅴🅱🅹🅾🆃🆈🅼🆂
#define vin for(auto &x:v) cin>>x;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
#define all(x) x.begin(),x.end()
#define rev(x) reverse(all(x))
#define clr(x) memset(x,0,sizeof(x))
#define sortall(x) sort(all(x))
#define itr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626
#define fast_IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
typedef unsigned long long ull;
typedef map    <int,int> mpii;
typedef pair   <int,int> pii;
typedef pair   <ll,ll>   pl;
typedef vector <int>     vi;
typedef vector <ll>      vl;
typedef vector <pii>     vpii;
typedef vector <pl>      vpl;
typedef vector <vi>      vvi;
typedef vector <vl>      vvl;
const double EPS=1e-9;
const int N=1e6;
const int M=1e9+7;
void solve(){
    ll n=0,m=0,a=0,b=0,i=0,j=0,k=0,l=0,r=0,c=0,ans=0,temp=0,cnt=0,sum=0;
    string s,s1,s2,s3;
    cin>>r>>c;
    vi v;
    fo(i,r){
        cin>>s;
        fo(j,c){
            if(s[j]=='o'){
                v.pb(i);
                v.pb(j);
            }
        }
    }
    cout<<abs(v[0]-v[2])+abs(v[1]-v[3]);
}
int32_t main(){
    fast_IO;
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}