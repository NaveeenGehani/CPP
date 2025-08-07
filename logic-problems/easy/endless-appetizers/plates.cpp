#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, r;
        cin >> x >> y >> r;
        int extra_sticks = 0;
        int plates = ceil((x + (r / 30)) / (float) y);
        cout << plates << endl;
    }
    return 0;
}