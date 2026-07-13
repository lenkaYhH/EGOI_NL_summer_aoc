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
    int a, b, c; cin >> a >> b >> c;
    int bi;
    set<int> books;

    for (int i=0; i<a+b+c; i++) {
        cin >> bi;
        books.insert(bi);
    }
    
    cout << books.size() << "\n";   
    return 0;
}