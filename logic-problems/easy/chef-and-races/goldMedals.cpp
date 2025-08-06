#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, a, b;
	    cin >> x >> y >> a >> b;
	    int wins = 0;
	    for(int i = 1; i <= 4; i++){
	        if((i == x || i == y) && (i != a && i != b)){
	            wins++;
	        }
	    }
	    cout << wins << endl;
	}
	return 0;
}
