#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int second_largest = 0;
        
        // first approach
        int largest = max({a, b, c});
        int smallest = min({a, b, c});
        second_largest = (a + b + c) - (largest + smallest);
        cout << second_largest << endl;

        // second approach
        /*
        int arr[] = {a, b, c};
        int n = sizeof(arr) / sizeof(arr[0]);
        
        sort(arr, arr + n);
        
        second_largest = arr[1];
        cout << second_largest << endl;
        */
    }
    return 0;

}