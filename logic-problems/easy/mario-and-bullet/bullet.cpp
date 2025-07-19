#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, z;
	    cin >> x >> y >> z;
	    int min_time = max(0, (z - (y/x)));
	    cout << min_time << endl;
	}
	return 0;

}
