#include <bits/stdc++.h>
using namespace std;

/**
 * This program takes a string of A's and D's and determines who wins
 * in a game of Anton and Danik.
 * The game is played by taking turns making moves, and the person
 * who makes the most moves wins.
 * If the number of moves made is equal, then the game is a draw.
 * The program outputs either "Anton", "Danik", or "Friendship" to
 * indicate who won or if it was a draw.
 */
int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;

    int a = 0, d = 0;

    // loop through the string and count the number of A's and D's
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'A')
            a += 1;
        else
            d += 1;
    }

    // if Anton made more moves, output "Anton"
    if (a > d)
        cout << "Anton";
    // if Danik made more moves, output "Danik"
    else if (d > a )
        cout << "Danik";
    // if they made an equal number of moves, output "Friendship"
    else
        cout << "Friendship";

    return 0;
}

