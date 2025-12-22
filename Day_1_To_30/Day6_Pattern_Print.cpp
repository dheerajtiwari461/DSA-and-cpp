#include <iostream>
using namespace std;

int main(){

//     First Pattern:
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4
    // int row, col;

    // for(row=1; row<=5; row++){
    //     for(col=1; col<=6; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

//     Second Pattern:
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
    // int row, col;
    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5; col++){
    //         cout << col*col << " ";
    //     }
    //     cout << endl;
    // }

//     Third Pattern:
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
    // int row, col;
    // for(row=1; row<=5; row++){
    //     for(col=1; col<=6; col++){
    //         cout << col * col * col << " ";
    //     }
    //     cout << endl;
    // }

//     Fourth Pattern:
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
    // char row, col;
    // for(row='F'; row<='K'; row++){
    //     for(col='F'; col<='K'; col++){
    //         cout << col <<" ";
    //     }
    //     cout << endl;
    // }

    int row, col;
    for(row=1; row<=5; row++){
        for(col=1;col<=5;col++){
            cout<<(row-1)*5+col << " ";
            
        }
        cout << endl;
    }

}