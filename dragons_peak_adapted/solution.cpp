#include <iostream>
using namespace std;

int main() {
    int N, P, Q; cin >> N >> P >> Q;

    int tot_cost = 0;
    int current_XP = 0;

    for (int i=0; i<N; i++) {
        int ai; cin >> ai;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        int uil_cost = (ai-current_XP) * P;
        tot_cost += min(uil_cost, Q);
        current_XP = ai;
    }

    cout << tot_cost << '\n';
}