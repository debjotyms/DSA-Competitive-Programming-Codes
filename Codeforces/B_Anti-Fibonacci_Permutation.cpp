#include<bits/stdc++.h>
#define NL endl
#define LL long long
#define PB push_back
#define VI vector <int>
#define SQR(A) ((A)*(A))
#define MAXII(A,B) max(A,B)
#define MINII(A,B) min(A,B)
#define DRL(A) LL A; cin>>A
#define DRI(A) int (A); cin>>A
#define read(type) readInt<type>()
#define DRII(A,B) int A,B; cin>>A>>B
#define DRLL(A,B) LL A,B; cin>>A>>B
#define MAXIII(A,B,C) max(A,max(B,C))
#define MINIII(A,B,C) min(A,min(B,C))
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
#define DRLLL(A,B,C) LL A,B,C; cin>>A>>B>>C
#define DRIII(A,B,C) int A,B,C; cin>>A>>B>>C
#define DRIIII(A,B,C,D) int A,B,C,D; cin>>A>>B>>C>>D
using namespace std;
void solve(){
    DRI(t);
    int n=t;
    while(t--){
        DRI(p);
        int l=p;
        int arr[p+1];
        for(int i=p;i>0;i--){
            arr[i]=i;
        }
        for(int h=1;h<=p;h++){
            for(int i=p;i>0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            int temp = arr[h];
            arr[h] = arr[h+1];
            arr[h+1] = temp;
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}