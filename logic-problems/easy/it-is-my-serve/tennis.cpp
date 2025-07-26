#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int p, q;
	    cin >> p >> q;
	    int total_serves = (p+q) / 2;
	   // if total_serves is even, print Alice, else print Bob
	    string next_turn = ( total_serves % 2 == 0 ) ? "Alice" : "Bob";
	    cout << next_turn << endl;
	}
	return 0;

}
