#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    
    for (int i=0; i<n-1; i++) cin >> arr[i];

    int cur = 0;

    while (cur != n-1) {
        cout << cur << " ";
        cur = arr[cur];
    }

    cout << cur << "\n";
    return 0;
}