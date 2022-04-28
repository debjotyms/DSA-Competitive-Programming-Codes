#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        if(n==1) return 0;
        else if(n==2) return 1;
        return nthFibonacci(n-1)%(1000000007) + nthFibonacci(n-2)%(1000000007);
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}