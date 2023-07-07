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
#define read(x) cin >> x
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
    ll k, n, w, ans = 0;
    cin >> k >> n >> w;
    loop(i, 1, w+1){
        ans +=  i*k;
    }
    if(ans < n) write(0);
    else {
        ans -= n;
        write(ans);
    }
}