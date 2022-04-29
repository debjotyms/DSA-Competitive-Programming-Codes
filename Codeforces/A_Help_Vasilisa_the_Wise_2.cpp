#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    int r1,r2,c1,c2,d1,d2; cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int i,j,k,l,flag=0;
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            for(k=1;k<10;k++){
                for(l=1;l<10;l++){
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l && i+j==r1 && k+l==r2 && i+k==c1 && j+l==c2 && i+l==d1 && j+k==d2){
                        flag = 1;
                        cout<<i<<" "<<j<<endl<<k<<" "<<l;
                        return;
                    }
                }
            }
        }
    }
    cout<<-1;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}