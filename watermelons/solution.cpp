#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;

    while (n--) {
        int wi; cin >> wi;
        if (wi%2==0) cnt++;
    }

    cout << cnt << "\n";
}