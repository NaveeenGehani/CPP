#include <bits/stdc++.h>
using namespace std;

int main() {
	int juicePrice = 50;
	double profitPercent = 0.3;
	int t;
	cin >> t;
	while(t-- > 0){
	    int n;
	    cin >> n;
	    int totalSales = n * juicePrice;
	    int profit = profitPercent * totalSales;
	    cout << profit << endl;
	}
    return 0;
}
