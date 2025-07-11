#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--> 0) {
        int n;
        cin >> n;
        // using ceil method
        // int cars_required = ceil(n / 4.0);

        // Wihout using ceil method
        int cars_required = (n + 3) / 4;
        cout << cars_required << endl;
    }
    return 0;

}