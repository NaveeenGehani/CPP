#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	int mins_2x = y / 2;
	int mins_1x = x - y;
	int total_watch_mins = mins_2x + mins_1x;
	cout << total_watch_mins << endl;
	
	return 0;

}
