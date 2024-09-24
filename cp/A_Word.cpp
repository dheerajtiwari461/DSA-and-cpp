#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
    int uc = 0, lc=0;

    for(char c: s){
        if(isupper(c)){
            uc +=1;
        }else if(islower(c)){
            lc +=1;
        }
    }

    if(lc>=uc){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
      cout<<  s;
    }else{
        transform(s.begin(), s.end(), s.begin(), :: toupper);
      cout<<  s;
    }



    return 0;
}

