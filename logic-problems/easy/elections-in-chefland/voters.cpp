#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	int eligible_voters = 0;
	    int n, x;
	    cin >> n >> x;
	    int ages[n];
	    for(int i = 0; i < n; i++){
	        cin >> ages[i];
	        if(ages[i] >= x){
	            eligible_voters++;
	        }
	    }
	    cout << eligible_voters << endl;
	}
	return 0;

}
