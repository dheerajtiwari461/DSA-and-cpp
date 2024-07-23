#include <bits/stdc++.h>
using namespace std;

int main()
{

    // dec to bin
    int num = 13;
    int rem, ans=0, mul=1;
    while (num>0)
    {
        rem = num%2;
        num /=2;
        ans = rem * mul + ans;
        mul = mul*10;
    }
    cout << ans;

}

