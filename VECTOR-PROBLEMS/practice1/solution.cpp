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
    int n, q; cin >> n;
    vi arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    cin >> q;

    for (int i=0; i<q; i++) {
        char op; cin >> op;

        if (op == 'a') {
            int x; cin >> x;
            arr.pb(x);
        } else if (op == 'b') {
            if (arr.size()) {
                cout << arr[0] << "\n";
                arr.erase(arr.begin());
            } else {
                cout << "-1\n";
            }

        } else if (op == 'c') {
            if (arr.size()) {
                cout << arr.back() << "\n";
                arr.pop_back();
            } else {
                cout << "-1\n";
            }
        } else if (op == 'd') {
            cout << arr.size() << "\n";

        } else if (op == 'e') {
            reverse(all(arr));

        } else if (op == 'f') {
            sort(all(arr));
        } else if (op == 'g') {
            sort(all(arr), greater<int>());
        } else {
            arr.clear();
        }
    }
    
    return 0;
}