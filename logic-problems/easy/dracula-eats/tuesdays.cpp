#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int tuesdays = 0;

        // First approach
        /*
        for(int i = 1; i <= n; i++){
            if(i % 7 == 2){
                tuesdays++;
            }
        }
        */

        // Second approach
        // tuesdays = ceil((n-1)/7.0);

        // Third approach without ceil()
        tuesdays = (n + 5) / 7;
        cout << tuesdays << endl;
    }
    return 0;
}