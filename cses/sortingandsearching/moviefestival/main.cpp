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
    ll n, curr_end = 0, total = 0;
    cin >> n;
    vector<pair<ll, ll>>v;
    while(n--){
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(all(v));
    for(auto it : v){
        if(it.second >= curr_end){
            curr_end = it.first;
            total++;
        }
    }
    cout << total << endl;
}
