#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n > 0 && n <= 10) {
            cout << "Lower Double" << endl;
        } else if (n > 10 && n <= 15) {
            cout << "Lower Single" << endl;
        } else if (n > 15 && n <= 25) {
            cout << "Upper Double" << endl;
        } else if (n > 25 && n <= 30) {
            cout << "Upper Single" << endl;
        }
    };
    return 0;   
    
}