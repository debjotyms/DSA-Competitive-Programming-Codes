#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define VI vector <int>
#define FL(A,B,C,D) for(int A=B;A<C;A+=D)
using namespace std;
void solve(){
    vector<double> vv;
    double t;
    while(cin>>t){
        vv.PB(sqrt(t));
    }
    cout<<fixed<<setprecision(4);
    for(int i=vv.size()-1;i>=0;i--){
        cout<<vv[i]<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define pb push_back
// #define vi vector <long long>
// #define rev(x) reverse(all(x))
// #define all(x) x.begin(),x.end()
// #define vin for(auto &x:v) cin>>x;
// #define vout(v) for(auto x:v) cout<<x<<" ";
// #define endl '\n'
// typedef long long ll;
// long long cs = 1;

// void solve(){
//     double t;
//     stack<double> st;
//     while(cin>>t){
//         st.push(sqrt(t));
//     }

//     while(!st.empty()){
//         cout<<fixed<<setprecision(4)<<st.top()<<endl;
//         st.pop();
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t=1;
//     while(t--) solve();
//     return 0;
// }