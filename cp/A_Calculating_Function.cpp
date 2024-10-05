#include <bits/stdc++.h>
using namespace std;

long long f(long long n){
    if(n%2 == 0)
    return n/2;
    else
    return -(n/2+1);

}

int main()
{
   long long t;
   cin>>t;
    cout<<f(t)<<endl;
    return 0;
}

