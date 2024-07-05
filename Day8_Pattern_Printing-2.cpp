#include<iostream>
using namespace std;

int main(){

// First Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1
// int row, col, n;
// cout<< "number: ";
// cin>>n;
// for(row=1; row<=n;row++){
//     for(col=1; col<=n-row;col++){
//         cout<< "  ";
//     }
//     for(col=row;col>=1; col--){
//         cout<<col<< " ";
//     }
//     cout <<endl;
// }

// Second Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//         A
//       B B
//     C C C
//   D D D D
// E E E E E

// int row,col,n;
// cout << "Enter: ";
// cin>>n;
// char alp;
//     for(row=1;row<=n;row++){
//         for(col=1;col<=n-row;col++){
//             cout<< "  ";
//         }
       
//         for(col=1;col<=row;col++){
//             char alp = 'A'+ row-1;
//             cout << alp << " ";
//         }
//         cout << endl;
//     }

// Third Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//         5
//       5 4
//     5 4 3
//   5 4 3 2
// 5 4 3 2 1
// int row,col,n;
// cout << "Enter ";
// cin >>n;
// for(row=1;row<=n;row++){
//     for(col=1; col<=n-row;col++){
//         cout << "  ";
//     }
//     for(col=n; col>n-row; col--){
//         cout<< col << " ";
//     }
//     cout << endl;
// }

// Fourth Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//         E
//       E D
//     E D C
//   E D C B
// E D C B A
int row,col,n=5;
cout << "Enter ";
cin>>n;
for(row=1;row<=n; row++){
    for(col=1; col<=n-row;col++){
        cout << "  ";
    }
    for(char ch='A'; col>'A'; col--){
       cout << ch << " ";
        
    }
    cout << endl;
}


}