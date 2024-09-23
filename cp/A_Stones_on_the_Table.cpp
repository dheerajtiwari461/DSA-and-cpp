#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
    cin>>s;
    

    int out=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            out +=1;
        }
    }
    cout<< out;

    return 0;
}

