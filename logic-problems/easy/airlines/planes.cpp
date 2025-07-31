#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x, n;
	    cin >> x >> n;
	    int total_seats = x * 100;
	    int min_planes = 0;
	    if(total_seats > n){
	        min_planes = 0;
	    }
	    else if(n > total_seats){
	        min_planes = ceil((n - total_seats) / 100.0);
	    }
	    cout << min_planes << endl;
	}
	return 0;

}
