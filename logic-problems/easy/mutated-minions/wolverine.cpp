#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int wolverine = 0;
	    for(int i = 0; i < n; i++){
	        int value = 0;
	        cin >> value;
	        if((value + k) % 7 == 0){
	            wolverine++;
	        }
	    }
	    cout << wolverine << endl;
	}
	return 0;
}
