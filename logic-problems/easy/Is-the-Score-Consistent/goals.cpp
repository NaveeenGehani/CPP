#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    int a, b, c, d;
	    cin >> a >> b;
	    cin >> c >> d;
	    if(c >= a && d >= b){
	        cout << "Possible" << endl;
	    } else{
	        cout << "Impossible" << endl;
	    }
	}
	return 0;

}
