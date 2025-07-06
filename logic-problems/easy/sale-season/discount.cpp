#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    int x;
	    cin >> x;
	    int discount = 0;
	    int total = 0;
	    if(x <= 100){
	        discount = 0;
	        total = x - discount;
	    }else if (x > 100 && x <= 1000){
	        discount = 25;
	        total = x - discount;
	    }else if (x > 1000 && x <= 5000){
	        discount = 100;
	        total = x - discount;
	    }else{
	        discount = 500;
	        total = x - discount;
	    }
        cout << total << endl;
	}
	return 0;

}
