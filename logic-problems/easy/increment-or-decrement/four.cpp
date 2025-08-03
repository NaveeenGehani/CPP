#include <iostream>  
using namespace std;

int main() {
	int n;
	cin >> n;
	int result = (n%4 == 0) ? ++n : --n;
	cout << result << endl;
	return 0;
}
