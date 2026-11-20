#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int mn=1e9, mx=0;

    for (int i=0; i<n; i++) {
        int l; cin >> l;
        mn = min(mn, l);
        mx = max(mx, l);
    }

    if (mx-mn > 2*k) cout << "nee\n";
    else cout << "ja\n";
    return 0;
}