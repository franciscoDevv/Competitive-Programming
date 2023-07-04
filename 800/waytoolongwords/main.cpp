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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(sz(s) <= 10) cout << s << endl;
        else {
            int end = sz(s)-1;
            int count = 0;
            for(int i = 1; i < s.size()-1; i++){
                count++;
            }
            cout << s[0] << count << s[end] << endl;
        }
    }
}