#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--> 0) {
        int over1000 = 0;
        int n;
        cin >> n;
        int difficulty[n];
        for (int i = 0; i < n; i++) {
            cin >> difficulty[i];
            if (difficulty[i] >= 1000) {
                over1000++;
            }
        }
        cout << over1000 << endl;
    }

}