#include<bits/stdc++.h>
#define LL long long
#define PB push_back
#define MP make_pair
#define VI vector <int>
#define VIN for(int &x:v) cin>>x;
#define FL(A,B,C,D) for (int A=B;A<C;A+=D)
using namespace std;
void solve(){
    string s;
	while(getline(cin,s)&&s!="DONE"){
		string s1,s2;
		int len=s.length();
		for(int i=0;i<len;i++){
			if(isalpha(s[i])){
				s1+=tolower(s[i]);
			}
		}
		s2=s1;
		reverse(s1.begin(),s1.end());
		if(s1==s2)
			cout<<"You won't be eaten!"<<"\n";
		else{
			cout<<"Uh oh.."<<"\n";
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