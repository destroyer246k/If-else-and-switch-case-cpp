// Patel Vishwas
// 24070123072
// A3
#include <iostream>
using namespace std;
int main()
{
    int a, b ;
    int choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Choose an operation:" << endl;
    cout << "1 for Addition" << endl;
    cout << "2 for Subtraction" << endl;
    cout << "3 for Multiplication" << endl;
    cout << "4 for Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a * b << endl;
            break;
        case 4:
            if (b != 0) {
                cout << "Result: " << a/ b << endl;
            } else {
                cout << "Not Divisible by 0." << endl;
            }
            break;
        default:
            cout << "Enter Choice from 1 to 4"<< endl;
    }
    return 0;
}

/*
output:
Enter first number: 10
Enter second number: 5
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 1
Result: 15

Enter first number: 10
Enter second number: 5
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 2
Result: 5

Enter first number: 10
Enter second number: 5
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 3
Result: 50

Enter first number: 10
Enter second number: 5
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 4
Result: 2

Enter first number: 10
Enter second number: 0
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 4
Not Divisible by 0.

Enter first number: 10
Enter second number: 2
Choose an operation:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
Enter your choice (1-4): 7
Enter Choice from 1 to 4
*/