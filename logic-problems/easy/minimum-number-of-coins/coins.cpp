#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    int min_coins = 0;
	    if(x % 10 == 0){
	        min_coins = x / 10;
	    } else if(x % 5 == 0){
	        min_coins = (x / 10) + 1;
	    } else {
	        min_coins = -1;
	    }
	    cout << min_coins << endl;
	}
	return 0;

}
