#include<iostream>
using namespace std;

int main(){

//     First Pattern:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// // 1 2 3 4 5 6
//     int row, col;

//     for(row=1; row<=6; row++){
//         for(col=1;col<=row;col++){
//             cout << col<<" ";
//         }
//        cout << endl;
//     }

// Second Pattern:
// A
// A B
// A B C
// A B C D
// A B C D E
// int row,col;

// for(row=1; row<=5; row++){
//     for(col=1; col<=row; col++){
//         char alp =  'A'+col-1;
//         cout << alp << " ";
//     }
//     cout<< endl;
// }

// Third Pattern:
// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15
// int row, col;
// for(row=10; row<=15; row++){
//     for(col=10;col<=row; col++){
//         cout << col << " ";
//     }
//     cout << endl;
// }

// Fourth Pattern:
// A B C D
// A B C
// A B
// A

// int row; 
// char  col;
// for(row=1; row<=5; row++){
//     for(col='A'; col <='D'-(row-1); col++){
//         cout << col<< " ";
//     }
//     cout <<endl;
// }

int row,col,n;
cin >> n;

for(row=1; row<=n; row++){
    for(col=1; col<=n-(row-1); col++){
        cout << "* ";
    }
    cout << endl;
}
}