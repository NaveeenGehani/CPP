#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    double p = ((( (float)z / x) / y ) * 100.0);
	    if(p > 50) {
	       cout << "Yes" << endl;
	    }else{
	       cout << "No" << endl;
	    }
	}
	return 0;

}
