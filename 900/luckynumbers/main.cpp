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
#define read(x) cin >> x
#define write(x) cout << x << "\n"
    
ll lucky(string s){
    sort(all(s));
    char l = s[0];
    ll end = sz(s)-1;
    char r = s[end];
    int il = l - '0';
    int ir = r - '0';
    return (ir - il);
}

int main(){
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    */
    #ifndef Mishra
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll t;
    read(t);
    while(t--){
        set<ll>p;
        string l, r;
        cin >> l >> r;
        ll a = stoi(l);
        ll b = stoi(r);
        loop(i, a, b){
            stringstream ss;
            ss << i;
            string actual = ss.str();
            p.insert(lucky(actual)); 
        }
        set<ll>::iterator itr = p.end();
        itr--;
        write(*itr);
        p.clear();
    }
}