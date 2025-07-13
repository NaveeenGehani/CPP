#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int operations = 0;
	    int n, x;
	    cin >> n >> x;
	    int face_down_cards = n - x;
	    if(face_down_cards >= x){
	        operations = x;
	    }else if(x >= face_down_cards){
	        operations = face_down_cards;
	    }
	    cout << operations << endl;
	}
	return 0;

}
