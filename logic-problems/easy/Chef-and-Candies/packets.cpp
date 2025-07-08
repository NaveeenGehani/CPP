#include <bits/stdc++.h>

using namespace std;

int main() {
    int candiesPerPacket = 4;
    int t;
    cin >> t;
    while (t-- > 0) {
        int candiesReq;
        int n, x;
        cin >> n >> x;
        if (x <= n) {
            candiesReq = n - x;
        } else {
            candiesReq = 0;
        }
        int candyPacketsReq = ceil((float) candiesReq / candiesPerPacket);
        cout << candyPacketsReq << endl;
    }
    return 0;

}