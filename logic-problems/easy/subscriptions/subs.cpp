#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int cost = 0;
    while (t > 0) {
        int n, x;
        cin >> n >> x;
        if (n > 0) {
            int subs = ceil(n / 6.0);
            cost = subs * x;
            cout << cost << endl;
        }
        t--;
    }
    return 0;

}