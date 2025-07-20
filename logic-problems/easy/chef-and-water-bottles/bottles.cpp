#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;
        int bottlesFilled = 0;
        for (int i = 0; i < n; i++) {
            if (k >= x) {
                k = k - x;
                bottlesFilled++;
            } else {
                break;
            }
        }
        cout << bottlesFilled << endl;
    }
    return 0;
}