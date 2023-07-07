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
const int maxN = 1e6;
const int MOD = 1e9+7;

int dp[maxN+1];

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
    ll n;
    read(n);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6 && i-j >= 0; j++){
            dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    }
    cout << dp[n];  
}