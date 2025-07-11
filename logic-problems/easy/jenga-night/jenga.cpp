#include <bits/stdc++.h>

using namespace std;

void check_valid(int n, int x) {
    string value = (x % n == 0) ? "Yes" : "No";
    cout << value << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        check_valid(n, x);
    }
    return 0;
    
}