#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, h, total_width = 0;
   cin>>n>>h;
    vector <int>he(n);
    for(int i=0; i<n; i++){
        cin>>he[i];
    }
    for(int j=0; j<n; j++){
        if(he[j]>h)
        total_width +=2;
        else
        total_width +=1;
    }
    cout<<total_width;

    return 0;
}

