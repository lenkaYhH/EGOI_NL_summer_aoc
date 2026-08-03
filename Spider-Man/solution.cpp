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
    vi webs(n);

    for (int i=0; i<n; i++) cin >> webs[i];

    vi tot(n);

    for (int i=0; i<n; i++) tot[i] = webs[(i+n-1)%n] + webs[(i+1)%n];

    int ind = max_element(all(tot)) - tot.begin();

    cout << ind << "\n";

    int mx = tot[ind];

    sort(all(tot));
    
    if (upper_bound(all(tot), mx) - lower_bound(all(tot), mx) > 1) {
        cout << "invalud test case\n"; 
    }

    return 0;
}

