#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int val1 = (n/100-1)*100+99;
    int val2 = (n/100)*100+99;

    if (abs(val1-n) < abs(val2-n) && val1 > 0) cout << val1 << "\n";
    else cout << val2 << "\n";
    return 0;
}