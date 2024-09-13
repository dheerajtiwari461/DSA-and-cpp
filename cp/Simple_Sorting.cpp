#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   vector<int>arr(t);
   for(int i=0; i<t; i++){
    cin >> arr[i];
   }

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        cout << arr[i]<<"\n";
    }


    return 0;
}

