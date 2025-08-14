#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    int final_price = a + b + c - min({a,b,c});
	    cout << final_price << endl;
	}
	return 0;
}
