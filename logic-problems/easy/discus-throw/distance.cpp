#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    int max_distance = max({a, b, c});
	    cout << max_distance << endl;
	}
	return 0;

}
