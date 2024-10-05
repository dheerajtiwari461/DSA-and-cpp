#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
    vector  <int> op (n);
    for(int i=0; i<n; i++){
        cin>>op[i];
    }

    int res =0;
    for(int j=0; j<n; j++){
        if(op[j] !=0)
        res +=1;
    }
    (res !=0)?cout<<"HARD":cout<<"EASY";
    return 0;
}

