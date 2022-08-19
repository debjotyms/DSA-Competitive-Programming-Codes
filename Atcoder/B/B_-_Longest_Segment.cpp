#include <bits/stdc++.h>
using namespace std;
double distance(int a,int b,int c,int d){
  return sqrt(((a-b)*(a-b))+((c-d)*(c-d)));
}
int main() 
{
    int t,i,j,x[101],y[101],k,l;
    double ans=0,dis;
    cin>>t;
    for(i=0,j=0;i<t;i++,j++){
      cin>>x[i]>>y[i];
    }
    for(i=0,j=0;i<t;i++,j++){
      for(k=1,l=1;k<t;k++,l++){
        dis = distance(x[i],x[k],y[i],y[k]);
        if(ans<dis){
          ans=dis;
        }
      }
    }
    printf("%.10lf",ans);
}