#include <bits/stdc++.h> // Ye header file saari standard libraries ko include kar leti hai
using namespace std; // Standard namespace use kar rahe hain

int main()
{
    int t; // Number of magnets ka count store karne ke liye variable 't' declare kiya
    cin >> t; // User se number of magnets input le rahe hain
    
    vector<string> mag(t); // 'mag' naam ka ek vector of strings banaya, jo 't' size ka hai
    for(int i = 0; i < t; i++) { // Loop 't' times chalega
        cin >> mag[i]; // Har magnet ka orientation input le rahe hain aur vector 'mag' mein store kar rahe hain
    }
    
    int group = 1; // Initial group count ko 1 set kar rahe hain, kyunki kam se kam ek group to hoga hi
    for(int i = 1; i < t; i++) { // Loop second magnet se start ho kar last magnet tak chalega
        if(mag[i] != mag[i - 1]) // Agar current magnet ka orientation previous magnet se different hai
            group++; // To group count ko increment kar do
    }
    
    cout << group; // Total groups ka count output kar rahe hain
    return 0; // Program successful completion ke baad 0 return kar raha hai
}