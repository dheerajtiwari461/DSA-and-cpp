#include <bits/stdc++.h>
using namespace std;

int main()
{
   string t;
   cin>>t;
   set<char> distinct_chars(t.begin(),t.end());
    (distinct_chars.size()%2==0) ? cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";

    return 0;
}

