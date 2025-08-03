#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int AtoB = (500 - (2 * x)) + (1000 - (4 * (x + y)));
        int BtoA = (1000 - (4 * y)) + (500 - (2 * (x + y)));
        int result = max(AtoB, BtoA);
        cout << result << endl;
    }
    return 0;
}