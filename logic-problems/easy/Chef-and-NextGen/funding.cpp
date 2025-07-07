#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--> 0) {
        int unitsRequired = 0;
        int unitsGenerated = 0;
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        unitsRequired = a * b;
        unitsGenerated = x * y;

        if (unitsRequired <= unitsGenerated) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;

}