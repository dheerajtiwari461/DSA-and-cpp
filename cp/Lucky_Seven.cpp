#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for(int i = s.length(); i >=7; i-- ){
        if(i==7) cout << i;
    }

}

