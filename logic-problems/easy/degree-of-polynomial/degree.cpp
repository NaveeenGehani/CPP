#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int terms;
        cin >> terms;
        int coefficient = 0;
        int degree = 0;
        for (int i = 0; i < terms; ++i) {
            cin >> coefficient;
            if (coefficient != 0) {
                degree = i;
            }
        }
        cout << degree << endl;
    }
    return 0;
}