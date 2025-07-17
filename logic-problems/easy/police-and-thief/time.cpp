#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int catch_time = abs(x - y);
        cout << catch_time << endl;
    }
    return 0;
    
}