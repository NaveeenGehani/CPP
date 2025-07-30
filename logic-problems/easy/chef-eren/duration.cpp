#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int total_duration = 0;

        // ----- first approach -----
        /*
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                total_duration += a;
            }
            else {
                total_duration += b;
            }
        }
        */
        
        // ----- second approach
        
        if (n % 2 == 0) {
            total_duration = (n / 2) * (a + b);
        }
        else if (n % 2 != 0) {
            
            // if n is odd, then there will be always more odd indexed episodes than even indexed episode.
            // a = even indexed episode length, b = odd indexed episode length
            // mulyiply a with number of even-indexed episodes and b with number of  odd-indexed episodes 

            total_duration = (((n - 1) / 2) * a) + (((n + 1) / 2) * b);
        }
        cout << total_duration << endl;
    }
    return 0;

}