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
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    */

    #ifndef Mishra
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t, n, q;
    read(t);
    while(t--){
        cin >> n >> q;
        vi s(n);
        vi v(q);
        loop(i, 0, sz(s)) cin >> s[i];
        loop(i, 0, sz(v)) cin >> v[i];
        vi copy;
        loop(i, 0, sz(v)) copy.push_back(v[i]);
        sort(all(copy));
        int end = sz(copy)-1;
        int x = end - sz(v);
        while(x--){
            int final = sz(v)-1;
            v.push_back(final-n);
        }
        loop(i, 0, sz(v)){
            int ac = v[i];
            loop(j, 0, sz(s)){
                if(s[j] > v[i]) {
                    cout << j+1 << endl;
                    break;
                }
            }
            cout << -1 << endl;
        }

    }
}
