#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> pi(t);
    vector<int> giver(t);

    for (int i = 0; i < t; i++)
    {
        cin >> pi[i];
    }

    for (int i = 0; i < t; i++)
    {
        giver[pi[i] - 1] = i + 1;
    }

    for (int i = 0; i < t; i++)
    {
        cout << giver[i] << " ";
    }

    return 0;
}
