#include <iostream>
using namespace std;

int main() {
    int r, b; cin >> r >> b;
    int cnt=0;

    cnt += (r+1)/2 * 3;

    if (r%2) {
        cnt += b/2;
    } else {
        cnt += (b+1)/2;
    }

    cout << cnt << "\n";
    return 0;
}