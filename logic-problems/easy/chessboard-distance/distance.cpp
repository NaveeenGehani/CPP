#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x1, y1, x2. y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    int x = abs(x1 - x2);
	    int y = abs(y1 - y2);
	    int distance = max(x, y);
	    cout << distance << endl;
	}
	return 0;
    
}
