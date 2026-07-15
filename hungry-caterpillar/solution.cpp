#include <bits/stdc++.h>

#define int long long
#define all(V) V.begin(), V.end()
#define pb(X) push_back(X)

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


signed main() {
    int n; cin >> n;
    bool alive = true;

    int hp=0;

    for (int i=0; i<n; i++) {
        int val; cin >> val;
        hp += val;

        if (hp<0) alive = false;
    }

    if (alive) cout << "Ja\n";
    else cout << "Nee\n";
    
    return 0;
}