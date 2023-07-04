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
    int m[5][5];
    loop(i, 0, 5){
        loop(j, 0, 5){
            cin >> m[i][j];
        }
    }
    int i2, j2;
    loop(i, 0, 5){
        loop(j, 0, 5){
            if(m[i][j] == 1){
                i2 = i;
                j2 = j;
                break;
            }
        }
    }
    int ifinal, jfinal;
    if(2 > i2){
        ifinal = 2-i2;
    } else if(i2 > 2){
        ifinal = i2-2;
    }
    if(2 > j2){
        jfinal = 2-j2;
    } else if(j2 > 2){
        jfinal = j2 - 2;
    }
    cout << ifinal + jfinal << endl;
}