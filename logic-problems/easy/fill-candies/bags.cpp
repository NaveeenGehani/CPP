#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;
        int total_capacity = k * m;
        
        // first approach
        /*
        int a = 0;
        while (n != 0) {
            if (n < total_capacity) {
                n = 0;
                a++;
            } else {
                n = n - total_capacity;
                a++;
            }
        }
        cout << a << endl;
        */
        
        // second approach
        /*
        int b = (n + total_capacity - 1) / total_capacity;
        cout << b << endl;
        */
        
        // third approach
        int c = ceil( (float) n / total_capacity );
        cout << c << endl;
    }
    return 0;

}