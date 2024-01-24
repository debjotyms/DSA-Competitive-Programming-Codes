#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector <long long>
#define rev(x) reverse(all(x))
#define all(x) x.begin(),x.end()
#define vin for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x<<" ";
#define endl '\n'
typedef long long ll;
long long cs = 1;

void solve() {
    set<string> a = {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin"};
    set<string> b = {"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"};
    set<string> c = {"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"};

    ll n;
    cin >> n;
    ll res = 0;
    ll cur = 1;
    while (n--) {
        string s;
        cin >> s;
        if (a.find(s) != a.end()) {
            res += abs(cur - 1);
            cur = 1;
        } else if (b.find(s) != b.end()) {
            res += abs(cur - 2);
            cur = 2;
        } else if (c.find(s) != c.end()) {
            res += abs(cur - 3);
            cur = 3;
        }
    }
    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}