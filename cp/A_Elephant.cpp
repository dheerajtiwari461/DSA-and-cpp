#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x;
   cin>>x;

    int step=x/5;
    if(x%5!=0){
        step+=1;
    }
    cout<<step;

    return 0;
}

