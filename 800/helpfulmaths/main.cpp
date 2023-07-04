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
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    */
    #ifndef Mishra
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin >> s;
    if(sz(s) <= 2) {
        cout << s[0];
        return 0;
    }
    string numbers = "";
    sort(all(s));
    loop(i, 0, sz(s)){
        if(s[i] != '+') numbers += s[i];
    }
    loop(i, 0, sz(numbers)){
        cout << numbers[i];
        if(i != sz(numbers)-1) cout << '+';
    }
}