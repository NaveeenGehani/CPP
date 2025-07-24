#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    int moves = (x / y) + (x % y);
	    cout << moves << endl;
	}
	return 0;

}
