#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-- > 0){
	    string str_num = "";
	    cin >> str_num;
	    string reversed_str_num = "";
	    for(int i = (str_num.length() - 1); i >= 0; i--){
	        reversed_str_num.push_back(str_num[i]);
	    }
	    int number = stoi(reversed_str_num);
	    cout << number << endl;
	}
	return 0;

}
