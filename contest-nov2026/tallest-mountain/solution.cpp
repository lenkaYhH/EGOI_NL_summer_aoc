#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int mxr, mxc, mx=0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            int h; cin >> h;
            if (h>mx) {
                mxr = i; 
                mxc = j;
                mx = h;
            }
        }
    }

    cout << mxr+1 << " " << mxc+1 << "\n";
    return 0;
}