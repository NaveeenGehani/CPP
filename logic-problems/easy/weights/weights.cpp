#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        bool isAvail = false;
        int possibleCases[] = {
            x,
            y,
            z,
            x + y,
            x + z,
            y + z,
            x + y + z
        };
        for (int i = 0; i < 7; i++) {
            if (possibleCases[i] == w) {
                isAvail = true;
                break;
            }
        }
        if (isAvail) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;

}