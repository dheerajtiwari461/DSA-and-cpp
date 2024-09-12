#include <bits/stdc++.h>
using namespace std;

int main()
{
   int m[5][5], r,c,i,j;
   for(i=0; i<5;i++){
    for(j=0; j<5;j++){
        cin>>m[i][j];
        if(m[i][j]==1){
            r=i;
            c=j;
        }
    }
   }
    cout<< abs(2-r)+abs(2-c);    

    return 0;
}

