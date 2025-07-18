#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string size = "normal";
        string result = "";
        int x;
        cin >> x;
        for (int i = 0; i < x; i++) {
            if (size == "normal") {
                size = "huge";
            } else if (size == "huge") {
                size = "small";
            } else if (size == "small") {
                size = "normal";
            }
        }
        // convert size to uppercase
        for(int j = 0; j < size.length(); j++){
            result += toupper(size[j]);
        }
        cout << result << endl;
    }
    return 0;

}