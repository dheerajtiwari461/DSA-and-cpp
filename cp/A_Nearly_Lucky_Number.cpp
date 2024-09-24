#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long t, lk =0;
   cin>>t;
    string s = to_string(t);
   for(int i=0; i<s.length(); i++){
    if(s[i] == '4' || s[i] == '7'){
        lk += 1;
    }
   }
   if(lk == 4 || lk == 7) 
   cout <<"YES";
   else 
   cout<< "NO";
   

    return 0;
}

