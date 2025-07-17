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
    