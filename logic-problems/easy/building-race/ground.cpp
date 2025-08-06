#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, x, y;
	    cin >> a >> b >> x >> y;
	    float chef_time = (float)a / x;
	    float chefina_time = (float)b / y;
	    string result = "";
	    if(chef_time > chefina_time){
	        result = "Chefina";
	    }
	    else if(chefina_time > chef_time){
	        result = "Chef";
	    }
	    else {
	        result = "Both";
	    }
	    cout << result << endl;
	}
	return 0;
}
