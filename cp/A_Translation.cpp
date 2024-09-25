#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read in two strings from the console
    string s, t;
    cin >> s >> t;

    // Check if the two strings are equal length
    if (s.length() != t.length()) {
        // If they are not the same length then it is impossible to translate them
        cout << "NO";
        return 0;
    }

    // Reverse the second string
    std::reverse(t.begin(), t.end());

    // Check if the reversed string is equal to the first string
    if (s == t) {
        // If they are equal then we can translate the first string to the second
        cout << "YES";
    } else {
        // If they are not equal then we cannot translate the first string to the second
        cout << "NO";
    }

    return 0;
}


