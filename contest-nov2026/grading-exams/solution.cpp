#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int tot = 0;

    for (int i=0; i<n; i++) {
        int ki; cin >> ki;
        if (ki < 40) tot += 25;
        else tot += 15;
    }

    cout << tot << "\n";
    return 0;
}