#include <bits/stdc++.h>
using namespace std;
int f(int t){
  int k = (t*t)+(2*t)+3;
  return k;
}
int main() {
    int t;
    cin>>t;
    cout<<f(f(f(t)+t)+f(f(t)));
}