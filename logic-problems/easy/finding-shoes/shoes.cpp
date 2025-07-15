#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;

	    // first approach
	    /*
	    int total_shoes = n * 2;
	    if(m <= n){
	        total_shoes = total_shoes - m;
	    } else if(m > n){
	        total_shoes = total_shoes - (total_shoes / 2);
	    }
	    cout << total_shoes << endl;
	    */
	    
	    // second approach
	    
	    // right shoes needed
	    int right_shoes = n;
	    // if left_shoes are already equal to or greater than n, then left_shoes = 0, else left_shoes are n - m
	    int left_shoes = max(0, n - m);
	    
	    // total shoes
	    int shoes_to_buy = right_shoes + left_shoes;
	    cout << shoes_to_buy << endl;  
	}
    return 0;

}
