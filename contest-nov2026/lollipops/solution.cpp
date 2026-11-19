#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int tot = 0;

    for (int i=0; i<n; i++) {
        int a, b; cin >> a >> b;
        tot += max(a, b);
    }

    cout << tot << "\n";
    return 0;
}