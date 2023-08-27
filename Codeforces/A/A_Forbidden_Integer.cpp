#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 1000000007
#define N 5005
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
 
        if(x!=1){
            YES;
            cout << n << nn;
            for(int i = 0; i < n; i++) cout << 1 << " ";
            cout << nn;
        }
        else {
            if(k==1) NO;
            else if(k==2){
                if(n%2==0){
                    YES;
                    cout << n/2 << nn;
                    for(int i = 0; i < n/2; i++) cout << 2 << " ";
                    cout << nn;
                }
                else NO;
            }
            else {
                YES;
                if(n%2==0){
                    cout << n/2 << nn;
                    for(int i = 0; i < n/2; i++) cout << 2 << " ";
                    cout << nn;
                }
                else {
                    cout << n/2 << nn;
                    for(int i = 0; i < n/2-1; i++) cout << 2 << " ";
                    cout << 3 << nn;
                }
            }
        }
    }
 
    return 0;
}