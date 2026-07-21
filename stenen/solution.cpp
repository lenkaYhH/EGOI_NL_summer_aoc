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
    int n; cin >> n;
    string s; cin >> s;

    int cnt=0;

    for (int i=1; i<n; i++) {
        if (s[i] == s[i-1]) cnt++;
    }

    cout << cnt << "\n";
}