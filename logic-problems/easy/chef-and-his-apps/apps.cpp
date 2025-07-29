#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int s, x, y, z;
	    cin >> s >> x >> y >> z;
	    int min_apps = 0;
        
	   // int storage_needed = z - (s - (x + y));
	   int free_memory = s - (x + y);
	   
	   // if free_memory >= z, then apps needed to be deleted = 0
	   if(free_memory >= z){
	        min_apps = 0;
	    } 
	    // else if s after subtractig minimum of (x,y) >= z, then apps neede to be deleted = 0
	    else if (s - min(x,y) >= z) {
	        min_apps = 1;
	    }
	    // else s after subtracting maximum of (x,y) < z, then apps needed to be deleted = 2
	    else if(s - max(x,y) < z) {
	        min_apps = 2;
	    }
	    cout << min_apps << endl;
	}
	return 0;

}
