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
    int n;
    cin >> n;
    int counter = 0;
    while(n--){
        bitset<3>v;
        int a, b, c;
        cin >> a >> b >> c;
        v[0] = a;
        v[1] = b;
        v[2] = c;
        if(v.count() >= 2) counter++;
    }
    cout << counter << endl;
    
}