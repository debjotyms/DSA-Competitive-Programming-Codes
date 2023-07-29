#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int t, n;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        long long ans=1;
        for (int i=1,j=1;i<=n&&j<=n;) {   
            if((i+1)*j>(j+1)*i){
                i++;
                ans+=i*j;
                ans%=MOD;
            }else{
                j++;
                ans+=i*j;
                ans%=MOD;
            }
        }
        cout << 2022 * ans % MOD << endl;
    }
    return 0;
}
