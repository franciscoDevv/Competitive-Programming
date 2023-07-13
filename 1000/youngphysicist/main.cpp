#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define loop(i, a, b) for(int i = a; i < b; i++)
#define pb(x) push_back(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vll vector<long long> 
#define write(x) cout << x << "\n"
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    /*
    #ifndef Mishra
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    */
    ll n, ta = 0, tb = 0, tc = 0;
    cin >> n;
    while(n--){
        ll a, b, c;
        cin >> a >> b >> c;
        ta += a;
        tb += b;
        tc += c;
    }
    if(ta == 0 && tb == 0 && tc == 0) write("YES");
    else write("NO");
}