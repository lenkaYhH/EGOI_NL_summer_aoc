#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int prev, cur;
    int cnt = 0;
    cin >> prev;

    for (int i=1; i<n; i++) {
        cin >> cur;
        if (cur < prev) cnt++;
        swap(prev, cur);
    }

    cout << cnt << "\n";
}