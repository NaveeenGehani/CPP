#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    int p, q, r, s;
	    cin >> p >> q >> r >> s;
	    int maxNum = max( { p, q, r, s } );
	    int sum = p + q + r + s;
	    if(2 * maxNum > sum){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	}
	return 0;

}
