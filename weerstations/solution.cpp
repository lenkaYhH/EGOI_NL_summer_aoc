#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int val=0;

    for (int i=0; i<n; i++) {
        int ti; cin >> ti;
        val += ti;
    }
    // cout << val << "\n";
    cout <<  val / n << "\n";
}