#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    int min_games = ceil((y-x)/8.0);
	    cout << min_games << endl;
	}
	return 0;

}
