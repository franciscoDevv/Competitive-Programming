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
#define read(x) cin >> x

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
    cin >> n;
    vll v(n);
    loop(i, 0, sz(v)) cin >> v[i];
    sort(all(v));
    loop(i, 0, sz(v)) cout << v[i] << " ";
}
