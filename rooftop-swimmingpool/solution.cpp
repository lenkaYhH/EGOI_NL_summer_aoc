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
    vi arr(n);
    int mx = 0;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    int cnt = 0;

    for (auto v: arr) cnt += mx-v;

    cout << cnt << "\n";
    for (auto v: arr) cout << mx-v << " ";

    cout << "\n";
    return 0;
}