#include <bits/stdc++.h>
using namespace std;

bool hasDisDigi(int number){
 string numstr = to_string(number);
 unordered_set<char> digitsSet;
    for(char digit : numstr){
        if(digitsSet.find(digit) != digitsSet.end())
        return false;
    digitsSet.insert(digit);
    }
    return true;
}

int main()
{
   int t;
   cin>>t;

    
    while(true){
        t++;
        if(hasDisDigi(t))
        break;
    }
    cout << t;
    return 0;
}