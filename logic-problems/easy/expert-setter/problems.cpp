#include <bits/stdc++.h>

using namespace std;

int main() {
    float reqPercent = 50.0;
    int t;
    cin >> t;
    while (t--> 0) {
        int x, y;
        cin >> x >> y;
        float obtPercent = ( ( (float) y / x) * 100.0);
        if (obtPercent >= reqPercent) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;

}