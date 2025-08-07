#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int result = n * (n - 1);
	    cout << result << endl;
	}
	return 0;
}
