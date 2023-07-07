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



vll even;
vll odd;

void fill(ll n){
    even.resize(n+1);
    odd.resize(n+1);
    even[0] = 2;
    for(int i = 1; i <= n; i++){
        even[i] = even[i-1]+2;
    }
    odd[0] = 1;
    for(int i = 1; i <= n; i++){
        odd[i] = odd[i-1]+2;
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

    ll n, k;
    cin >> n >> k;
    fill(n);
    if(k > sz(odd)) {
        ll aux = k - sz(odd);
        write(even[aux-1]);
        return 0;
    }
    else {
        write(odd[k-1]);
    }
}