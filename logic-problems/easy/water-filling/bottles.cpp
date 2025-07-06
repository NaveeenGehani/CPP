#include <bits/stdc++.h>

using namespace std;

int main() {
    int b[3];
    int length = sizeof(b) / sizeof(b[0]);
    int t;
    cin >> t;
    while (t-- > 0) {
        int emptyBottles = 0;
        int filledBottles = 0;
        for (int i = 0; i < length; i++) {
            cin >> b[i];
            if (b[i] == 0) {
                emptyBottles++;
            } else {
                filledBottles++;
            }
        }
        if (emptyBottles >= 2) {
            cout << "Water filling time" << endl;
        } else {
            cout << "Not now" << endl;
        }
    }
    return 0;

}