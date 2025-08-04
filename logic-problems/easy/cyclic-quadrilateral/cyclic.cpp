#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    string result = (a+c == 180 && b+d == 180) ? "Yes" : "No";
	    cout << result << endl;
	}
	return 0;
}
