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
    vector<char>v;
    loop(i, 0, sz(s)){
        v.push_back(s[i]);
    }
    char tb = 'h';
    int c = 0;
    loop(i, 0, sz(v)){
        if(v[i] == tb){
            c++;
            tb = 'e';
        } else if(v[i] == tb){
            c++;
            tb = 'l';   
        } else if(v[i] == tb){
            c++;
            tb = 'o';
        } else if(v[i] == tb) c++;
    }
    if(c >= 4) cout << "YES";
    else cout << "NO";
}