#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int people = 0;
        int x, y;
        cin >> x >> y;
        
        // FIRST approach
        people = x / (2 * y);
        
        // SECOND approach
        /*
        int usage_per_person = 2 * y;
        while(x >= usage_per_person){
            x = x - usage_per_person;
            people++;
        }
        */

        cout << people << endl;
    }
    return 0;

}