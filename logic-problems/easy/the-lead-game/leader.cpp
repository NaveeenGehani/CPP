#include <iostream>
using namespace std;

int main() {
    int rounds;
    cin >> rounds;
    int sum_player1 = 0;
    int sum_player2 = 0;
    int leader = 0;
    int lead = 0;
    while (rounds--) {
        int p1, p2;
        cin >> p1 >> p2;
        sum_player1 += p1;
        sum_player2 += p2;
        int diff = 0;
        if (sum_player1 > sum_player2) {
            diff = sum_player1 - sum_player2;
            if (diff > lead) {
                leader = 1;
                lead = diff;
            }
        }
        else {
            diff = sum_player2 - sum_player1;
            if (diff > lead) {
                leader = 2;
                lead = diff;
            }
        }
    }
    cout << leader << " " << lead << endl;
    return 0;
}