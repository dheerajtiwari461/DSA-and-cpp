#include <bits/stdc++.h>
using namespace std;
// TODO: it is incomplete
int main()
{
   int t,k,sum=0;
   cin>>t>>k;
   while(t--){
    int x;
    cin >>x;
    for(int i=1; i<=t; i++){
        if(x>=5) sum=sum+1;
        cout << sum<<endl;
    }
   }
   cout<<sum; 
    return 0;
}

