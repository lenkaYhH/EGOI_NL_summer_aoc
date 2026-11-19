#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string best; int cur_max = 0;

    for (int i=0; i<n; i++) {
        string name; int score; cin >> name >> score;
        if (score>cur_max) {
            best = name;
            cur_max = score;
        }
    }
    cout << best << "\n";
    return 0;
}