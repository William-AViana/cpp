#include <iostream>
using namespace std;

int main() {

  bool isAdmin = true; // true false 0 1
  cout << isAdmin << endl;

  char symbol = '$';
  cout << symbol << endl;

  // datatypes modifiers
  // signed unsegned long short
  unsigned short int age = 31;
  cout << age << endl;

  float pi = 3.1415; // 32 bits -  single precision floating point type
  const double PI =  3.141592; // 64 bits - double precision floating point type
  cout << pi << endl;
  cout << PI << endl;

  short int n1 = 1;
  long int n2 = 1;
  unsigned int n3 = 1;
  long long int n4 = 1;
  cout << n1 + n2 + n3 + n4 << endl;
  
  return 0;
}