#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int chef_floor = ceil(x/10.0);
        int chefina_floor = ceil(y/10.0);
        int floors = abs(chef_floor - chefina_floor);
        cout << floors << endl;
    }
    return 0;
}