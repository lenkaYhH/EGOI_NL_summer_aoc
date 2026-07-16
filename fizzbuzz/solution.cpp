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
    int n, x, y; cin >> n >> x >> y;

    for (int i=1; i<=n; i++) {
        if (i%x==0 && i%y==0) {
            cout << "fizzbuzz ";

        } else if (i%x ==0) {
            cout << "fizz ";

        } else if (i%y == 0) {
            cout << "buzz ";
        } else {
            cout << i << " ";
        }
        cout << "\n";
    }

}