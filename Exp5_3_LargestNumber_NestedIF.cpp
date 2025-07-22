// Patel Vishwas
// 24070123072
// A3
#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout << "Enter Number 1:";
  cin >> a;
  cout << "Enter Number 2:";
  cin >> b;
  cout << "Enter Number 3:";
  cin >> c;
  if(a>b){
      if(a>c){
           cout << "Number 1: " << a << " is largest" << endl;
      }
  }

  if(b>c){
      if(b>a){
           cout << "Number 2: " << b << " is largest" << endl;
      }
  }
    if(c>b){
      if(c>a){
           cout << "Number 3: " << c << " is largest" << endl;
      }
  }
}
  
/*
output:
Enter Number 1:45
Enter Number 2:33
Enter Number 3:27
Number 1: 45 is largest

Enter Number 1:22
Enter Number 2:66
Enter Number 3:11
Number 2: 66 is largest

Enter Number 1:14
Enter Number 2:19
Enter Number 3:25
Number 3: 25 is largest
*/  