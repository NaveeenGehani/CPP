#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, x, b, y;
	    cin >> a >> x >> b >> y;
	    float alice_speed = (float) a / x;
	    float bob_speed = (float) b / y;
	    string result = "";
	    if (alice_speed > bob_speed){
	        result = "Alice";
	    }
	    else if (bob_speed > alice_speed){
	        result = "Bob";
	    }
	    else {
	        result = "Equal";
	    }
	    cout << result << endl;
	}
	return 0;
}

