#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    int x, y;
	    cin >> x >> y;
	    if(x > y){
	        cout << "Car" << endl;
	    }else if (y > x) {
	        cout << "Bike" << endl;
	    }else{
	        cout << "Same" << endl;
	    }
	}
	return 0;

}
