#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;
	    int total_marks = n * x;
	    if((y % x == 0) && (y <= total_marks)){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	}
	return 0;

}
