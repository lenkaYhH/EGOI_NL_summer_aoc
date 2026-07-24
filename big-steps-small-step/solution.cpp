#include <iostream>
using namespace std;

int main() {
    int x, y; cin >> x >> y;

    if ((x%2 == 0 && y%2 == 0) || ((x%2) != (y%2))) {
        cout << "Ja\n";
        
    } else cout << "Nee\n";
}