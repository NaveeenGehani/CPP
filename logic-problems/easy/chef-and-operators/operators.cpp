#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string result;
        if (a < b) {
            result = "<";
        }
        else if (a > b) {
            result = ">";
        }
        else {
            result = "=";
        }
    }
    return 0;
}