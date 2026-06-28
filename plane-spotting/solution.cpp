#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int count = 0;

    for (int i=0; i<n; i++) {
        int t; cin >> t;

        if (a <= t && t < b) {
            count++;
        }
    }

    cout << count << '\n';
}