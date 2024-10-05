#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
    int p, a,room=0;
    for(int i=0; i<t; i++){
        cin>>p>>a;
        if(a-p >= 2)
        room +=1;
    }
    cout<< room;

    return 0;
}

