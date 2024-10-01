#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
    int max=0, rem=0;

    for(int i=0; i<t; i++){
        int exit, enter;
        cin >> exit>> enter;
        rem -= exit;
        rem += enter;
        if(rem>max)
        max=rem;
    }
    cout<<max;
    return 0;
}

