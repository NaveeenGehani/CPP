#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    int x;
	    cin >> x;
	    if(x >= 1 && x <= 50){
	        cout << "Left" << endl;
	    }else if(x >= 51 && x <= 100){
	        cout << "Right" << endl;
	    }
	}
	return 0;

}
