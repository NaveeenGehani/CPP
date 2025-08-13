#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, k;
	    cin >> a >> b >> k;
	    int steps = ceil(abs(a-b)/ (float) k);
	    cout << steps << endl;
	}
	return 0;
}
