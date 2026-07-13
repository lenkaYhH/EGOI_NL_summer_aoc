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

    int h=0, p=0;
    int cur = 0;

    while (cur+p+1 <= n) {
        h++;
        cur += ++p;
    }

    cout << h << "\n"; 
}