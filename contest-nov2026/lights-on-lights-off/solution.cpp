#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    bool aan;
    string s; cin >> s;

    if (s=="aan") aan = true;
    else aan = false;

    if (n%2) aan = !aan;

    if (aan) cout << "ja\n";
    else cout << "nee\n";
    
    return 0;
}