#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k;

    int cnt = 0;

    for (int i=0; i<k; i++) {
        int di; cin >> di;
        cnt += di;
    }

    cout << n - cnt << "\n";
}