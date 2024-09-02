#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x[4];
   int wk=0;
   for(int i=0; i<4; i++){
    cin>>x[i];
    if(x[i]>=10){
        wk+=1;
    }
   }
    cout<<wk;
    return 0;
}

