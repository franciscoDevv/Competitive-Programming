#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define loop(i, a, b) for(int i = a; i < b; i++)
#define pb(x) push_back(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define ll long long
#define vi vector<int>
#define vll vector<long long> 
#define mp(x, y) make_pair(x, y)
#define read(x) cin >> x
#define write(x) cout << x << endl
#define random(a, b) (a + rand() % (b - a + 1))


vi v(51);
v[0] = 0;
v[1] = 1;

int fibo(ll n){
    loop(i, 2, sz(v)){
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];
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
    ll n;
    read(n);
    write(fibo(n));

}