#include <bits/stdc++.h>
using namespace std;

int main() {
	int notebooksPerKG = 1000 / 100;
	int t;
	cin >> t;
	while(t-- > 0){
	    int n;
	    cin >> n;
	    int notebooks = notebooksPerKG * n;
	    cout << notebooks << endl;
	}
	return 0;

}
