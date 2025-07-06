#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    int n, x;
	    cin >> n >> x;
	    int totalSlices = n * x;
	    int totalPizzas = ceil(totalSlices / 4.0);
	    cout << totalPizzas << endl;
	}
    return 0;

}
