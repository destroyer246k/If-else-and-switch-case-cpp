// Patel Vishwas
// 24070123072
// A3
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;
    if (ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'||ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'){
        cout << "The Charcter " << ch << " is Vowel." << endl;
    }
    else {
        cout << "The Character " << ch << " is Consonant." << endl;
    }
    return 0; 
}
/*
output:
Enter a Character: A
The Charcter A is Vowel.

Enter a Character: o
The Charcter o is Vowel.

Enter a Character: B
The Character B is Consonant.

Enter a Character: z
The Character z is Consonant.
*/
    