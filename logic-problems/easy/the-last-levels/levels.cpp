#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        // first approach
        /*
        int time_to_complete = 0;
        for (int i = 1; i <= x; i++) {
            time_to_complete += y;
            // check if i is multiple of 3 nd i is not equal to x, then add z to the time_to_complete 
            if (i % 3 == 0 && i != x) {
                time_to_complete += z;
            }
        }
        cout << time_to_complete << endl;
        */
        
        // second approach 
        int game_time = x * y;
        int break_time = ( (x - 1) / 3 ) * z;
        int total_time = game_time + break_time;
        cout << total_time << endl;
    }
    return 0;

}