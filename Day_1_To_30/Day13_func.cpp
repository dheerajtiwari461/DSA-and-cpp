#include <bits/stdc++.h>
using namespace std;

int sum(int add){
    return add + 4;
}
int sum2(int add){
    return add+5;
}
int main()
{
   int a,b;
   cin >>a>>b;
   // int c = sum(a);
   // int d = sum2(b);
 if(sum(a) >sum2(b)) cout <<"greater";
 else cout << "Lesser";

2}
