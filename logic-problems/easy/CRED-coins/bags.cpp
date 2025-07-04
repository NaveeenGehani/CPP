#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    int totalCoins = x * y;
	    int totalBags = floor(totalCoins / 100.0);
	    cout << totalBags << endl;
	}
	return 0;
}
