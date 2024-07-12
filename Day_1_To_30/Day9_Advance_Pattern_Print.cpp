#include <bits/stdc++.h>
using namespace std;
int main(){

// First Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// int row, col, n;
// cin >> n;

// for(row = 1; row<=n; row++){
//     // space
//     for(col=1;col<=n-row; col++){
//         cout << "  ";
//     }
//     // star
//     for(col=1; col<=2*row-1; col++){
//         cout << "* ";
//     }
//     // next line
//     cout << endl;
// }


// Second Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9
// int row, col, n;
// cin >>n;
// for(row=1; row<=n; row++){
//     for(col=1; col<=n-row; col++){
//         cout << "  ";
//     }
//     for (col=1; col<=2*row-1; col++){
//         cout << col << " ";
//     }
//     cout << endl;
// }

// Third Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A
// int row, col, n;
// cin>>n;
// for(row=1; row<=n; row++){
//     for(col=1; col<=n-row; col++){
//         cout << "  ";
//     }
//     for(char ch = 'A'; ch<='A'+row-1; ch++){
//         cout << ch << " ";
//     }
//     for(char ch = 'A'+row-2; ch>='A'; ch--){
//         cout << ch <<" ";
//     }
//     cout << endl;
// }

// *****
//  ***
//   *
// int row, col,n=3;
//   for (row = 0; row < n; row++) {
//     // space
//     for (col = 0; col < row; col++) {
//       cout << " ";
//     }
//     //  star
//     for (col = 0; col < 2 * n - (2*row+1); col++) {
//       cout << "*";
//     }
//     // space
//     for (col = 0; col < row; col++) {
//       cout << " ";
//     }
//     cout << endl;
//   }

// Fourth Pattern: Take an input n from the user, and create a pattern like
// below, for n=5, we have output like this.

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// int row, col, n;
// cin>>n;

// for(row=1; row<=n; row++){
//     // space
//     for(col=1; col<=n-row; col++)
//     cout << " ";
//     // star
//     for(col=1; col<=row; col++)
//     cout << "* ";
//      cout << endl;
// }
// for(row=n; row>=1; row--){
//     // space
//     for(col=1; col<=n-row; col++)
//     cout << " ";
//     // star
//     for(col=1; col<=row; col++)
//     cout << "* ";
//      cout << endl;
// }


// * * * * * * * * * * 
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// int n=5;
// cin >> n;
//  int space =0,row,col;
   
//     for(row=n; row>=1; row--){
//         // star
//         for(col=1;col<=row; col++){
//             cout << "* ";
//         }

//         // space
//         for(col=1; col<=space; col++){
//             cout << "  ";
//         }

//         // star
//         for(col=1;col<=row; col++){
//             cout << "* ";
//         }
//         space +=2;
//         cout << endl;
//     }
//     space =2*n-2;
//     for(row=1; row<=n; row++){
//         // star
//         for(col=1;col<=row; col++){
//             cout << "* ";
//         }

//         // space
//         for(col=1; col<=space; col++){
//             cout << "  ";
//         }

//         // star
//         for(col=1;col<=row; col++){
//             cout << "* ";
//         }
//         space -=2;
//         cout << endl;
//     }
 
int n;
cin >> n;
    int row, col;
    for(row=1; row<=n;row++){
        // star
        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        // space
        for(col=1; col<=n-row; col++){
            cout << "  ";
        }
        for(col=1; col<=n-row; col++){
            cout << "  ";
        }
        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        
        cout << endl;
    }
    for(row=n-1; row>=1;row--){
        // star
        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        // space
        for(col=1; col<=n-row; col++){
            cout << "  ";
        }
        for(col=1; col<=n-row; col++){
            cout << "  ";
        }
        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        
        cout << endl;
    }
    

    

}