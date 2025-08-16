#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a1, a2, a3, b1, b2, b3;
	    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	    
	    int alice_min_die = min({a1, a2, a3});
	    int bob_min_die = min({b1, b2, b3});
	    int alice_score = a1 + a2 + a3 - alice_min_die;
	    int bob_score = b1 + b2 + b3 - bob_min_die;
	    

	    if(alice_score > bob_score){
	        cout << "Alice" << endl;
	    }
	    else if(bob_score > alice_score) {
	        cout << "Bob" << endl;
	    }
	    else {
	        cout << "Tie" << endl;
	    }
	}
	return 0;
}
