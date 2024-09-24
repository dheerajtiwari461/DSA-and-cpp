#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k,n,w,bor=0;
   cin>>k>>n>>w;

   for(int i=1; i<=w; i++){
    bor += i*k;
   }
   if(bor-n >0){
      cout<< bor-n;
    }else{
        cout<<0;
    }
    

    return 0;
}

