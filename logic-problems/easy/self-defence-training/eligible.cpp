#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int eligible = 0;
        for(int i = 0; i < n; i++){
            int age;
            cin >> age;
            if(age >= 10 && age <= 60){
                eligible++;
            }
        }
        cout << eligible << endl;
    }
    return 0;
}