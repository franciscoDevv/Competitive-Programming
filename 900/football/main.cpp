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
    string s;
    cin >> s;
    int condition = 1;
    for(int i = 1; i <= s.size(); i++){
        if(s[i] == s[i-1]){
            condition++;
            if(condition == 7){
                write("YES");
                return 0;
            }
        } else {
            condition = 1;
        }
    }
    write("NO");
}