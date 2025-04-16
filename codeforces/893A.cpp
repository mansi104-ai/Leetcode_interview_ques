#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> winners(n);
    for(int i = 0; i < n; i++) {
        cin >> winners[i];
    }

    int player1 = 1, player2 = 2; // Initial players
    int waiting = 3;

    for(int i = 0; i < n; i++) {
        int winner = winners[i];
        if(winner != player1 && winner != player2) {
            cout << "NO\n";
            return 0;
        }
        // Identify the loser and swap with waiting
        int loser = (winner == player1) ? player2 : player1;
        player1 = winner;
        player2 = waiting;
        waiting = loser;
    }

    cout << "YES\n";
    return 0;
}
