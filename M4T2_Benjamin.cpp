// CSC 134
// M4T2
// N'Ky Benjamin
// 10/12/24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int teamPlayers;
    const int MIN_PLAYERS = 3;
    const int MAX_PLAYERS = 10;
    int players;

    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;

    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        cout << "You should have at least " << MIN_PLAYERS << " but no more than " << MAX_PLAYERS << " per team." << endl;
        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;
    }

    cout << "How many players are available? ";
    cin >> players;

    while (players <= 0)
    {
        cout << "Please enter 0 or greater: ";
        cin >> players;
    }
    return 0;
}