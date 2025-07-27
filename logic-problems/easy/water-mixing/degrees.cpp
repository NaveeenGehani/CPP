#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        
        // ----------- first approach -----------
        /*
        // do this until a is not equal to b
        while (a != b) {
            // if a < b, then increase a by 1 as-long-as x > 0
            if (a < b) {
                if (x > 0) {
                    a++;
                    x--;
                }
                else {
                    break;
                }
            }
            // else-if a > b, decrease a by 1 as-long-as y > 0
            else if (a > b) {
                if (y > 0) {
                    a--;
                    y--;
                }
                else {
                    break;
                }
            }
        }
        if (a == b) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        */
        
        // ----------- second approach -----------
        
        string result = "";
        if(a > b){
            result = (a - b <= y) ? "Yes" : "No";
        }
        else{
            result = (b - a  <= x) ? "Yes" : "No";
        }
        cout << result << endl;
    }
    return 0;

}