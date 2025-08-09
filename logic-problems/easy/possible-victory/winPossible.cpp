#include <iostream>
using namespace std;

int main() {
	int r, o, c;
	cin >> r >> o >> c;
	int teamB_score = c + ((20 - o) * 6) * 6;
	if(teamB_score > r){
	    cout << "Yes" << endl;
	}
	else {
	    cout << "No" << endl;
	}
	return 0;
}
