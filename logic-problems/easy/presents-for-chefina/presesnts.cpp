#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int coins = 0;
        // First Approach - Not suitable due to time complexity
        /*
        int free_gifts = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 4 == 0) {
                if (i + 1 <= n) {
                    free_gifts++;
                }
            }
        }
        coins = n - free_gifts;
        */
        
        // Second Approach
        coins = n - (n/5);
        cout << coins << endl;
    }
    return 0;

}