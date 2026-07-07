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
    string s; cin >> s;

    if (s.length()%2) cout << s[s.length()/2] << '\n';
    else cout << s[s.length()/2 - 1] << s[s.length()/2] << '\n';
    return 0;
}