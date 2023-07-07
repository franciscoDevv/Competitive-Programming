#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define loop(i, a, b) for(int i = a; i < b; i++)
#define loope(i, a, b) for(int i = a; i <= b; i++)
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


ll cache[50];


ll f(ll n){
    if(n < 2) return n;
    if(cache[n] != -1) return cache[n];

    cache[n] = f(n-1) + f(n-2);
    return cache[n];
}


void solve(){
    int n = 20;
    for(ll i = 0; i <= 20; i++){
        cache[i] = -1;
    }
}


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
    
}
