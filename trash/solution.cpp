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
    int n, m; cin >> n >> m;
    vi trash(n);

    for (int i=0; i<n; i++) cin >> trash[i];

    sort(trash.begin(), trash.end());

    int l=0, r=n-1;
    int cnt = 0;

    while (l<r) {
        if (trash[l] + trash[r] <= m) {
            l++; r--;
        } else {
            r--;
        }
        cnt++;
    }

    if (l==r) cnt++;

    cout << cnt << "\n";
    return 0;
}