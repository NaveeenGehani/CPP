#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, d;
        cin >> x >> y >> d;
        int diff = abs(x - y);
        string result = (diff <= d) ? "Yes" : "No";
        cout << result << endl;
    }
    return 0;
}