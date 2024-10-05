#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
    
    vector <string> mag(t);
    for(int i=0; i<t; i++){
        cin>>mag[i];
    }
    int group = 1;
    for(int i=1; i <t; i++ ){
        if(mag[i] != mag[i-1])
        group++;
    }
    cout<<group;
    return 0;
}

