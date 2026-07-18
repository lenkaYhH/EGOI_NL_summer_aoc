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
    int n, x; cin >> n >> x;
    vi arr(n);

    for (int i=0; i<n; i++) cin >> arr[i];

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i] + arr[j] == x) {
                cout << arr[i] << " " << arr[j] << "\n";
                return 0;
            }
        }
    }

}