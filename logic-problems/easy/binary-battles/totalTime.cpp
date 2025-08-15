#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int teams, duration_time, break_time;
	    cin >> teams >> duration_time >> break_time;
	    int rounds = log2(teams);
	    int time_taken = (rounds * duration_time) + ((rounds - 1) * break_time);
	    cout << time_taken << endl;
	}
	return 0;
}
