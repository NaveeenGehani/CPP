#include <bits/stdc++.h>
using namespace std;

int main() {
	int easy_points = 1;
	int hard_points = 2;
	int t;
	cin >> t;
	while(t-- > 0){
	    int x, a, b;
	    cin >> x >> a >> b;
	    int total_points = (a * easy_points) + (b * hard_points);
	    if(total_points >=  x){
	        cout << "Qualify" << endl;
	    }else{
	        cout << "NotQualify" << endl;
	    }
	}
	return 0;
	
}
