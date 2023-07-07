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

ll dp[10e6+1];

int main() {
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    */
    #ifndef Mishra
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n, x;
    cin >> n >> x;
    vll coins(n);
    loop(i, 0, sz(coins)) read(coins[i]);
    for(int i = 0; i <= x; i++) dp[i] = INT_MAX;
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        for(int w = 0; w <= x; w++){
            if(w - coins[i-1] >= 0){
                dp[w] = min(dp[w], dp[w - coins[i-1]] + 1);
            }
        }
    }
    if(dp[x] == INT_MAX) write(-1);
    else write(dp[x]);
}