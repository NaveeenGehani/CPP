#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int result = n / m;
	    // check candies are equally distributed among everyone and number of candies/person is even
	    if(n % m == 0 && result % 2 == 0){
	        cout << "Yes" << endl;
	    } else {
	        cout << "No" << endl;
	    }
	}
	return 0;

}
