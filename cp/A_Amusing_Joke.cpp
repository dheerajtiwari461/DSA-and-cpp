#include <bits/stdc++.h> // Ye header file saari standard libraries ko include kar leti hai
using namespace std; // Standard namespace use kar rahe hain

int main()
{
   string guest, host, pile; // Teen strings declare ki: guest, host aur pile
   cin >> guest >> host >> pile; // User se input le rahe hain in teeno strings ke liye

   string combined = guest + host; // Guest aur host strings ko concatenate karke ek nayi string combined bana rahe hain
   sort(combined.begin(), combined.end()); // Combined string ko sort kar rahe hain
   sort(pile.begin(), pile.end()); // Pile string ko bhi sort kar rahe hain
    
    // Agar sorted combined string aur sorted pile string barabar hain, to "YES" print karenge, warna "NO"
    (combined == pile) ? cout << "YES" : cout << "NO";

    return 0; // Program successful execution ke baad 0 return kar raha hai
}