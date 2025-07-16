#include <bits/stdc++.h>

using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
            int sum = 0;
            int avg = 0;
            int n;
            cin >> n;
            int a[n];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int j = 0; j < n; j++) {
                sum += a[j];
                avg = sum / (j + 1);
                if (avg < 40) {
                    cout << "No" << endl;
                    break;
                }
            }
            if(avg >= 40){
                cout << "Yes" << endl;
            }
        }
        return 0;
        
}