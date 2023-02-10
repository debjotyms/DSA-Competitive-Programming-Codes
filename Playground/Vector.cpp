#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    v.resize(5);
    
    v.pop_back();
    v.insert(v.begin()+2,100);
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}