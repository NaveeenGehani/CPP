#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    int a, b;
	    cin >> a >> b;
	    int valuation_a = 10 * a;
	    int valuation_b = 5 * b;
	    if(valuation_a > valuation_b){
	        cout << "First" << endl;
	    }else if(valuation_b > valuation_a){
	        cout << "Second" << endl;
	    } else{
	        cout << "Any" << endl;
	    }
	}
	return 0;

}
