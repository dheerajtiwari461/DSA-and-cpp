#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,k;
   cin>>t>>k;
   vector<int>score(t);

    for(int i=0; i<t; i++){
       cin>> score[i];
    }
    int parti=0;
    for(int i=0; i<score.size(); i++){
        if(score[i]>=score[k-1] && score[i]>0 ){
            parti+=1;
        }
    }
    cout<<parti;

    return 0;
}

