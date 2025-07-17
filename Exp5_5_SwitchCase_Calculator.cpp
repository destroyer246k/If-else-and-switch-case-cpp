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