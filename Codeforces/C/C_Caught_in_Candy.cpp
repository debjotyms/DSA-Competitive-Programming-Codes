#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n, centre_x,centre_y,nut_x,nut_y;
  int p =0;
  cin>>n>>centre_x>>centre_y;
  double nut[n+1];
  while(p<n){
    cin>>nut_x>>nut_y;
    nut[p] = sqrt(pow((centre_x-nut_x),2)+pow((centre_y-nut_y),2));
    p++;
  }
  sort(nut,nut+n);
  printf("%.13lf\n", nut[n-1]*2);
}