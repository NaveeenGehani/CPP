#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T>0){
	    int A, B, C;
	    cin >> A >> B >> C;
	    if(A+B > C*2){
	        cout << "YES\n";
	    }else{
	    cout << "NO\n";
	    }
	    T--;
	}
	return 0;

}
