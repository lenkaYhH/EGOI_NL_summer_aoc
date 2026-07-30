#include <bits/stdc++.h>

#define int long long
#define all(V) V.begin(), V.end()
#define pb(X) push_back(X)

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int n;
signed main() {
    cin >> n;
    vi forks(n);

    for (int i=0; i<n; i++) cin >> forks[i];

    sort(all(forks));
    cout << forks[0] + forks[1] << "\n";
    return 0;
}