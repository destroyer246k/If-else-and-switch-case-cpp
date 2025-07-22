// Patel Vishwas
// 24070123072
// A3
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a % 2 == 0){
        cout << "The number " << a << " is even." << endl;
    } else {
        cout << "The number " << a << " is odd." << endl;
    }
    return 0; 
}
/*
output:
Enter a number: 4
The number 4 is even.

Enter a number: 7
The number 7 is odd.
*/