// Patel Vishwas
// 24070123072
// A3
#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter any number from 1 to 5:";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Mathematical Tranformation Techniques." << endl;
            break;
        case 2:
            cout << "Digital Circuit and Logic Design." << endl;
            break;
        case 3:
            cout << "Electronic Devices and Circuits." << endl;
            break;
        case 4:
            cout << "Netowek Theory."<<endl;
            break;
        case 5:
            cout << "Signals and Systems." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
        

    return 0;
}
/*
output:
Enter any number from 1 to 5:1
Mathematical Tranformation Techniques.

Enter any number from 1 to 5:2
Digital Circuit and Logic Design.

Enter any number from 1 to 5:3
Electronic Devices and Circuits.

Enter any number from 1 to 5:4
Netowek Theory.

Enter any number from 1 to 5:5
Signals and Systems.

Enter any number from 1 to 5:6
Invalid choice.
*/