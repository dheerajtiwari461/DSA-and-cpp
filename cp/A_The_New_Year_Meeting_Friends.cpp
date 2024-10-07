#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    vector<int> co ={x1, x2, x3};

    sort(co.begin(), co.end());

    int median = co[1];

    int todi = abs(x1 -median) + abs(x2-median) + abs(x3-median);

    cout<< todi;

    return 0;
}
