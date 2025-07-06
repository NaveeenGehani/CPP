#include <bits/stdc++.h>

using namespace std;

int main() {
    int referee = 4;
    int r[referee];
    int t;
    cin >> t;
    while (t--> 0) {
        int inside = 0;
        for (int i = 0; i < referee; i++) {
            cin >> r[i];
            if (r[i] == 0) {
                inside++;
            }            
        };

        if (inside == referee) {
            cout << "IN" << endl;
        } else {
            cout << "OUT" << endl;
        }
    }
    return 0;

}