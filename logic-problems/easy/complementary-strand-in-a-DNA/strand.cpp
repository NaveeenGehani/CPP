#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "";
        cin >> s;
        string result = "";
        for (int i = 0; i < n; i++) {
            switch (s[i]) {
                case 'A':
                    result += "T";
                    break;
                case 'T':
                    result += "A";
                    break;
                case 'C':
                    result += "G";
                    break;
                case 'G':
                    result += "C";
                    break;
            }
        }
        cout << result << endl;
    }
    return 0;

}