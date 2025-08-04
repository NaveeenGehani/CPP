#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x, p;
	    cin >> n >> x >> p;
	    int cor_marks = x * 3;
	    int inc_marks = (n - x);
	    int final_marks = cor_marks - inc_marks;
	    string result = (final_marks >= p) ? "Pass" : "Fail";
	    cout << result << endl;
	}
	return 0;
}
