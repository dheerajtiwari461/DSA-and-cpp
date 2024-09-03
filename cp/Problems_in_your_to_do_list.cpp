#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int size,rem=0;;
    cin >>size;
    int arr[size];
    for(int i =0; i<size; i++){
        cin>>arr[i];
        if(arr[i]>=1000) rem+=1; 
    }
    cout<<rem<<endl;
   } 
    return 0;
}

