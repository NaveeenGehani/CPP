#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;

        int attacks = 1;
        // First Approach - While loop
        /*
        h = h - y;
        while (h > 0) {
            h = h - x;
            attacks++;
        }
        */

        // Second Approach - Direct Formula
        // subtract y-special-attack points from h-heath for that add 1 to attack, and then add (x - 1) for ceiing the result when divided by x to get total attacks.
        attacks = 1 + ((max(0, (h - y)) + x - 1) / x);
        cout << attacks << endl;
    }
    return 0;
}