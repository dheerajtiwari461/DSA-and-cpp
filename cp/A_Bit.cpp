#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int x=0;
   while(t--){
     string s;
     cin>>s;
     if(s.find("+") != -1){
        x++;
     }else if(s.find("-") != -1){
        x--;
     }
   } 
     cout <<x<<endl;
    return 0;
}

