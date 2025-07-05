#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int evenSold = 0;
    int oddSold = 0;
    cin >> n;
    int a[n];
    // taking input
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // checking soldiers having even and odd weapons
        if (a[i] % 2 == 0) {
            evenSold++;
        } else {
            oddSold++;
        }
    }

    if (evenSold > oddSold) {
        cout << "READY FOR BATTLE" << endl;
    } else {
        cout << "NOT READY" << endl;
    }
    return 0;

}