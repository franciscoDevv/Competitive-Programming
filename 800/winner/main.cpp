#include<bits/stdc++.h>
using namespace std;
#define loop(i, a, b) for(long long i = a; i < b; i++)
#define pb(x) push_back(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vll vector<long long>

int main(){
    #ifndef Mishra
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    string s;
    int p;
    map<string, int>m;
    while(n--){
        cin >> s >> p;
        if(p > 0){
            m[s] += p;
        } else {
            m[s] -= p;
        }
    }
    cout << m["andrew"];
}