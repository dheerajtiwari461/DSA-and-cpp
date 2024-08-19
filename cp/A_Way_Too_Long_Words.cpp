#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string in;
        cin>>in;
        if(in.length()>10){
            cout << in[0]<<in.length()-2<<in[in.length()-1]<<endl;
        }else{
            cout<<in<<endl;
        }
    }
}