#include <iostream>
using namespace std;

int main() {

    // 1. Print number from 280 to 250 with the help of for loop.
    // int n,i;
    // cout << "enter number";
    // cin>>n;

    // for ( i = n; i >= 250; i--)
    // {
    //     cout << i<<endl;
    // }

    // 2. Print char from ‘A’ to ‘Z’ with the help of a for loop.

    // for(char alp = 'A'; alp <= 'Z'; alp++){
    //     cout << alp << endl;
    // }

    // 3. Print char from ‘Z’ to ‘A’ with the help of a for loop.
    // for(char alp = 'Z'; alp >= 'A'; alp--){
    //     cout << alp << endl;
    // }

    // 4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    // for(int i = 220; i<=730; i=i+7){
    //     cout << i << endl;
    // }

    // 5. Print Sum of square of first n natural number.
//     int n;
//     cout << "Enter number: ";
//     cin>>n;
//    cout << n * (n + 1) * (2 * n + 1) / 6;

// 6. Print Sum of cube of first n natural number
    // int n ;
    // cin >>n;

    // cout <<  n * n * (n + 1) * (n + 1) / 4;

    // 7. Print n’th Fibonacci number.
    int n;
    cin >> n;
    int prev= 0, curr = 1, next = 0;
    for(int i = 2; i<=n; i++){
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    cout << curr;

};