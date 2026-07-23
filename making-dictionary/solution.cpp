#include <bits/stdc++.h>

#define int long long
#define all(V) V.begin(), V.end()
#define pb(X) push_back(X)

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


signed main() {
    string s1, s2; cin >> s1 >> s2;

    int ans = 0;

    for (int i=0; i<s1.size(); i++) {
        int val1, val2;

        if (s1[i] >= 'a') val1 = s1[i] - 'a';
        else val1 = s1[i] - 'A'; 

        if (s2[i] >= 'a') val2 = s2[i] - 'a';
        else val2 = s2[i] - 'A'; 

        if (val1 < val2) {
            ans = -1;
            break;
        } else if (val2 < val1) {
            ans = 1;
            break;
        }
    }

    cout << ans << "\n";

}